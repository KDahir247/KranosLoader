//
// Created by kdahi on 2020-09-23.
//

#ifndef KRANOS_CUBEMAPTEXTURE_H
#define KRANOS_CUBEMAPTEXTURE_H


#include <glad/glad.h>
#include <vector>
#include <string>
#include "Cubmap.h"


class CubemapTexture {
public:
    void InitializeCubeMap();
    unsigned int LoadCubemap(Cubemap faces);
    unsigned int GetCubeMapVAO() const {return cubeMapVAO;}
    void Free();
    ~CubemapTexture();
private:
    unsigned int cubeMapVAO;
    unsigned int cubeMapVBO;
    unsigned int cubeMapTexture;
};


#endif //KRANOS_CUBEMAPTEXTURE_H
