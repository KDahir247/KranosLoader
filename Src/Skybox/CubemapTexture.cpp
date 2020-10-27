//
// Created by kdahi on 2020-09-23.
//

#include <example/stb_image.h>
#include "CubemapTexture.h"

void CubemapTexture::InitializeCubeMap() {
    float skyboxVertices[] = {
            // positions
            -1.0f,  1.0f, -1.0f,
            -1.0f, -1.0f, -1.0f,
            1.0f, -1.0f, -1.0f,
            1.0f, -1.0f, -1.0f,
            1.0f,  1.0f, -1.0f,
            -1.0f,  1.0f, -1.0f,

            -1.0f, -1.0f,  1.0f,
            -1.0f, -1.0f, -1.0f,
            -1.0f,  1.0f, -1.0f,
            -1.0f,  1.0f, -1.0f,
            -1.0f,  1.0f,  1.0f,
            -1.0f, -1.0f,  1.0f,

            1.0f, -1.0f, -1.0f,
            1.0f, -1.0f,  1.0f,
            1.0f,  1.0f,  1.0f,
            1.0f,  1.0f,  1.0f,
            1.0f,  1.0f, -1.0f,
            1.0f, -1.0f, -1.0f,

            -1.0f, -1.0f,  1.0f,
            -1.0f,  1.0f,  1.0f,
            1.0f,  1.0f,  1.0f,
            1.0f,  1.0f,  1.0f,
            1.0f, -1.0f,  1.0f,
            -1.0f, -1.0f,  1.0f,

            -1.0f,  1.0f, -1.0f,
            1.0f,  1.0f, -1.0f,
            1.0f,  1.0f,  1.0f,
            1.0f,  1.0f,  1.0f,
            -1.0f,  1.0f,  1.0f,
            -1.0f,  1.0f, -1.0f,

            -1.0f, -1.0f, -1.0f,
            -1.0f, -1.0f,  1.0f,
            1.0f, -1.0f, -1.0f,
            1.0f, -1.0f, -1.0f,
            -1.0f, -1.0f,  1.0f,
            1.0f, -1.0f,  1.0f
    };

    glGenVertexArrays(1, &cubeMapVAO);
    glGenBuffers(1, &cubeMapVBO);

    glBindVertexArray(cubeMapVAO);
    glBindBuffer(GL_ARRAY_BUFFER, cubeMapVBO);

    glBufferData(GL_ARRAY_BUFFER, sizeof(skyboxVertices), skyboxVertices, GL_STATIC_DRAW);

    glVertexAttribPointer(0,3,GL_FLOAT, GL_FALSE, 3 * sizeof(float), nullptr);
    glEnableVertexAttribArray(0);
}


unsigned int CubemapTexture::LoadCubemap(Cubemap faces)
{
    glGenTextures(1, &cubeMapTexture);
    glBindTexture(GL_TEXTURE_CUBE_MAP, cubeMapTexture);

    int width, height, nrChannels;
    for (unsigned int i = 0; i < faces.Path.size() ; i++)
    {
            unsigned char *data = stbi_load(faces.Path[i].c_str(), &width, &height, &nrChannels, STBI_rgb_alpha);
            if (data) {
                glTexImage2D(GL_TEXTURE_CUBE_MAP_POSITIVE_X + i,
                             0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, data
                );
                stbi_image_free(data);
            } else {
                fprintf(stderr, "ERROR::TEXTURE_FILE_PATH_NOT_FOUND::CUBEMAPTEXTURE\n PATH::%s \n",faces.Path[i].c_str());
                stbi_image_free(data);
        }
    }
    glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_WRAP_R, GL_CLAMP_TO_EDGE);

    return cubeMapTexture;
}

CubemapTexture::~CubemapTexture() {
    glDeleteVertexArrays(1, &cubeMapVAO);
    glDeleteBuffers(1, &cubeMapVBO);
    glDeleteTextures(1, &cubeMapTexture);
}


void CubemapTexture::Free() {
    CubemapTexture::~CubemapTexture();
}
