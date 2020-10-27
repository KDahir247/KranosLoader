//
// Created by kdahi on 2020-09-19.
//

#include "Camera.h"

Camera::Camera() {
    cameraPos = glm::vec3(0.0f,0.0f,0.0f);
    cameraFront = glm::vec3(0.0f, 0.0f, -1.0f);
    cameraUp = glm::vec3(0.0f, 1.0f, 0.0f);
}


Camera::Camera(glm::vec3 cameraPosition, glm::vec3 cameraForward, glm::vec3 worldUp) {
    cameraPos = cameraPosition;
    cameraFront = cameraForward;
    cameraUp = worldUp;
}


void Camera::translateCameraMatrix(Camera::Direction direction, float speed) {

    switch (direction) {
        case Forward:
            cameraPos += glm::normalize(cameraFront) * speed;
            break;
        case Backward:
            cameraPos -= glm::normalize(cameraFront) * speed;
            break;
        case Left:
            cameraPos -= glm::normalize(glm::cross(cameraFront, cameraUp)) * speed;
            break;
        case Right:
            cameraPos += glm::normalize(glm::cross(cameraFront, cameraUp)) * speed;
            break;
    }

}


glm::mat4 Camera::GetCameraMatrix(){
    cameraView = glm::lookAt(cameraPos, cameraPos + cameraFront, cameraUp);
    return cameraView;
}

Camera::~Camera() {

}

void Camera:: rotateCameraMatrix(double xPos, double yPos,int windowWidth,int windowHeight) {

    float xOffset;
    float yOffset;
    if (firstMouse){
        lastX= windowWidth;
        lastY = windowHeight;
        firstMouse =false;
    }

    //TODO xPos and yPos check
    xOffset = xPos - lastX;
    yOffset = lastY - yPos;

    lastX = xPos;
    lastY = yPos;


    const float sensitivity = 0.03f;
    xOffset *= sensitivity;
    yOffset *= sensitivity;

    yaw += xOffset;
    pitch += yOffset;

    if (pitch >= 89) pitch = 89.0f;
    if (pitch <= -89) pitch = 89.0f;

    direction.x = cos(glm::radians(yaw)) * cos(glm::radians(pitch));
    direction.y = sin(glm::radians(pitch));
    direction.z = sin(glm::radians(yaw)) * cos(glm::radians(pitch));
    cameraFront = glm::normalize(direction);
}


