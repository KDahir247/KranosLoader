//
// Created by kdahi on 2020-09-25.
//

#include "Grid.h"


Grid::Grid() {

    float GridVertices[] = {
            -1,0,0,
            1,0,0
    };


    glGenVertexArrays(1, &GridVAO);
    glGenBuffers(GL_ARRAY_BUFFER, &GridVBO);

    glBindVertexArray(GridVAO);
    glBindBuffer(GL_ARRAY_BUFFER, GridVBO);

    glBufferData(GL_ARRAY_BUFFER, sizeof(GridVertices), GridVertices, GL_STATIC_DRAW);\
    glVertexAttribPointer(0,3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), nullptr);
    glEnableVertexAttribArray(0);
}


void Grid::Draw() {


}
