//
// Created by kdahi on 2020-09-23.
//

#include "Shader.h"

Shader::Shader(const char *vertexPath, const char *fragmentPath) {
    std::string vertexCode;
    std::string fragmentCode;
    std::ifstream vShaderFile;
    std::ifstream fShaderFile;

    vShaderFile.exceptions(std::ifstream::failbit | std::ifstream::badbit);
    fShaderFile.exceptions(std::ifstream::failbit | std::ifstream::badbit);

    try{
        vShaderFile.open(vertexPath);
        fShaderFile.open(fragmentPath);

        std::stringstream vShaderStream, fShaderStream;
        vShaderStream << vShaderFile.rdbuf();
        fShaderStream << fShaderFile.rdbuf();

        vertexCode = vShaderStream.str();
        fragmentCode = fShaderStream.str();
    } catch (...) {
        fprintf(stderr, "ERROR::SHADER::FILE_NOT_SUCCESSFULLY_READ \n");
    }

    const char* vShaderCode = vertexCode.c_str();
    const char* fShaderCode = fragmentCode.c_str();

    unsigned int Vertex, Fragment;

    Vertex = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(Vertex,1, &vShaderCode, nullptr);
    glCompileShader(Vertex);

    int success;
    char infoLog[512];
    glGetShaderiv(Vertex, GL_COMPILE_STATUS, &success);
    if (!success){

        glGetShaderInfoLog(Vertex, sizeof(infoLog), nullptr, infoLog );
        fprintf(stderr, "%s \n", infoLog);

    }
    Fragment = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(Fragment, 1, &fShaderCode, nullptr);
    glCompileShader(Fragment);

    glGetShaderiv(Fragment, GL_COMPILE_STATUS, &success);

    if (!success){
        glGetShaderInfoLog(Fragment, sizeof(infoLog), nullptr, infoLog);
        fprintf(stderr, "%s \n", infoLog);
    }

    ID = glCreateProgram();
    glAttachShader(ID, Vertex);
    glAttachShader(ID, Fragment);
    glLinkProgram(ID);

    glGetProgramiv(ID, GL_LINK_STATUS, &success);

    if (!success){
        glGetProgramInfoLog(ID, sizeof(infoLog), nullptr, infoLog);
        fprintf(stderr, "%s \n", infoLog);
    }

    glGetProgramiv(ID, GL_VALIDATE_STATUS, &success);

    if (!success){
        glGetProgramInfoLog(ID, sizeof(infoLog), nullptr, infoLog);
        fprintf(stderr, "%s \n", infoLog);
    }


    glDeleteShader(Vertex);
    glDeleteShader(Fragment);
}

void Shader::use() const {
    glUseProgram(ID);
}

void Shader::SetBool(const std::string &name, bool value) const {
    unsigned int location = glGetUniformLocation(ID, name.c_str());
    glUniform1i(location, value);
}

void Shader::SetInt(const std::string &name, float value) const {
    unsigned int location = glGetUniformLocation(ID, name.c_str());
    glUniform1i(location, value);
}

void Shader::SetFloat(const std::string &name, float value) const {
    unsigned int location = glGetUniformLocation(ID, name.c_str());
    glUniform1f(location, value);
}

void Shader::SetMat4(const std::string &name, float *value) const {
    unsigned int location = glGetUniformLocation(ID, name.c_str());
    glUniformMatrix4fv(location,1,GL_FALSE, value);
}

void Shader::SetVec3(const std::string &name, float x, float y, float z) const {
    unsigned int location = glGetUniformLocation(ID, name.c_str());
    glUniform3f(location, x, y, z);
}

void Shader::SetVec3(const std::string &name, float *value) const {
    unsigned int location = glGetUniformLocation(ID, name.c_str());
    glUniform3fv(location,1, value);
}



