//
// Created by kdahi on 2020-09-25.
//

#ifndef KRANOS_GRID_H
#define KRANOS_GRID_H

#include <glad/glad.h>
class Grid {

    Grid();

    void Draw();

private:
    unsigned int GridVAO;
    unsigned int GridVBO;

};


#endif //KRANOS_GRID_H
