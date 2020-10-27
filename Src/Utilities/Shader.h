//
// Created by kdahi on 2020-09-23.
//

#ifndef KRANOS_SHADER_H
#define KRANOS_SHADER_H

#include <glad/glad.h>
#include <glm/glm.hpp>

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class Shader {
public:
    unsigned int ID{};
    // constructor reads and build the shader
    Shader(const char* vertexPath, const char* fragmentPath);
    // use/activate the shader
    void use() const;
    // utility uniform function
    void SetBool(const std::string& name, bool value) const;
    void SetInt(const std::string& name, float value) const;
    void SetFloat(const std::string& name, float value) const;
    void SetMat4(const std::string& name, float* value) const;
    void SetVec3(const std::string& name, float x, float y, float z) const;
    void SetVec3(const std::string& name, float* value) const;

};


#endif //KRANOS_SHADER_H
