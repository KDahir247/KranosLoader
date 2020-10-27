//
// Created by kdahi on 2020-09-19.
//

#ifndef SRC_CAMERA_H
#define SRC_CAMERA_H
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
class Camera {
public:

    enum Direction{
        Forward,
        Backward,
        Left,
        Right
    };

    Camera();
    Camera(glm::vec3 cameraPosition, glm::vec3 cameraForward, glm::vec3 worldUp);
    void translateCameraMatrix(Direction direction, float  speed);
    void rotateCameraMatrix(double xPos,double yPos,int windowWidth,int windowHeight);
    [[nodiscard]] glm::mat4 GetCameraMatrix();
    ~Camera();

    glm::vec3 cameraPos;
    glm::vec3 cameraFront;
    glm::vec3 cameraUp;

private:
    glm::mat4 cameraView;
    glm::vec3 direction;
    float yaw = -90.0f;
    float pitch = 0.0f;
    bool firstMouse;
    float lastX, lastY;
};


#endif //SRC_CAMERA_H
