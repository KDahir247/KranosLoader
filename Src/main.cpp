#include <glm/ext/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "main.h"


#define WINDOW_WIDTH 1200
#define WINDOW_HEIGHT 800
#define MAX_VERTEX_BUFFER 512 * 1024
#define MAX_ELEMENT_BUFFER 128 * 1024

#pragma region callback_prototype
void glfw_error_callback(int code, const char* message);
void glfw_window_size_callback(GLFWwindow* window, int xSize, int ySize);
void glfw_window_refresh_callback(GLFWwindow* window);
void cursor_position_callback(GLFWwindow* window, double xPos, double yPos);
void glfw_mouse_button_callback(GLFWwindow* window, int button, int action, int mod);

bool isRotating{};
float deltaTime{};
float lastTime{};
Camera camera;
void processInput(GLFWwindow* window);

int main() {
    kranos_application application;
    CubemapTexture cubemapTexture;

#pragma region GLFW_INITIALIZATION
    GLFWwindow *window = nullptr;
    struct nk_glfw glfw = {window};
    struct nk_context *ctx;

    int width{}, height{};

    //glfw init
    if(!glfwInit()){
        fprintf(stderr, "GLFW failed to init! \n");
        exit(EXIT_FAILURE);
    }

    //pre setup window
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_SAMPLES, 8);

    //init window
    window = glfwCreateWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Kranos Loader", nullptr, nullptr);

    if (!window){

        glfwDestroyWindow(window);
        glfwTerminate();
        fprintf(stderr, "GLFW Window failed to init! \n");
        exit(EXIT_FAILURE);
    }

    glfwMakeContextCurrent(window);
    glfwGetWindowSize(window,&width, &height);

    //avoid tearing if any
    glfwSwapInterval(1);

    //Set Window Icon
    GLFWimage images[2];
    int widthL, heightL, nrChannelL;
    images[0].pixels =  stbi_load("../../Images/logo.png", &widthL, &heightL, &nrChannelL, STBI_rgb_alpha); //small icon
    images[0].width = widthL;
    images[0].height = heightL;

    images[1].pixels = stbi_load("../../Images/logo.png", &widthL, &heightL, &nrChannelL,STBI_rgb_alpha); //large icon
    images[1].width = widthL;
    images[1].height = heightL;

    glfwSetWindowIcon(window,2, images);
#pragma endregion GLFW_INITIALIZATION

    if (!gladLoadGLLoader(reinterpret_cast<GLADloadproc>(glfwGetProcAddress))){

        fprintf(stderr, "GLAD gl loader failed to load \n");
        exit(EXIT_FAILURE);
    }

    glEnable(GL_DEPTH_TEST);

    glViewport(0,0, WINDOW_WIDTH, WINDOW_HEIGHT);

    //init Nuklear
    ctx = nk_glfw3_init(&glfw, window, NK_GLFW3_INSTALL_CALLBACKS);
    kranos_gui kranosGui(ctx, &glfw, &application);

    //callbacks
    glfwSetErrorCallback(glfw_error_callback);
    glfwSetWindowSizeCallback(window, glfw_window_size_callback);
    glfwSetWindowRefreshCallback(window, glfw_window_refresh_callback);
    glfwSetCursorPosCallback(window, cursor_position_callback);
    glfwSetMouseButtonCallback(window, glfw_mouse_button_callback);
//    glfwSetKeyCallback(window, )


    kranosGui.SetFont("../../Fonts/Open_Sans/OpenSans-SemiBold.ttf", 15);
    kranosGui.SetStyle( THEME_BLACK);


    Shader skyboxShader("../../Shader/Skybox/Skybox.vert", "../../Shader/Skybox/Skybox.frag");

    //cubeMap
    cubemapTexture.InitializeCubeMap();
    Cubemap skyBox = Set_Style_SkyBox(THEME_NIGHT);
    unsigned int skyBoxTexture = cubemapTexture.LoadCubemap(skyBox);

    while (!glfwWindowShouldClose(window)){
        glfwPollEvents();
        processInput(window);

        kranosGui.Display();

        if (application.ShouldChangeSkybox()){
            skyBox = Set_Style_SkyBox(static_cast<SkyboxTheme>(application.GetSkyBoxTheme()));
            skyBoxTexture = cubemapTexture.LoadCubemap(skyBox);
        }

        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        glClearColor(0.1f, 0.1f, 0.1f, 1.0f);


        glDepthFunc(GL_LEQUAL);
        skyboxShader.use();
        glm::mat4 projection = glm::perspective(glm::radians(45.0f), (float)WINDOW_WIDTH / (float)WINDOW_HEIGHT, 0.1f, 100.0f);
        skyboxShader.SetMat4("projection", glm::value_ptr(projection));

        glm::mat4 view = glm::mat4(glm::mat3(camera.GetCameraMatrix()));
        skyboxShader.SetMat4("view", glm::value_ptr(view));

        glBindVertexArray(cubemapTexture.GetCubeMapVAO());
        glActiveTexture(GL_TEXTURE0);
        glBindTexture(GL_TEXTURE_CUBE_MAP, skyBoxTexture);

        glDrawArrays(GL_TRIANGLES, 0, 36);
        glDepthFunc(GL_LESS);
        glBindVertexArray(0);

        nk_glfw3_render(&glfw, NK_ANTI_ALIASING_ON, MAX_VERTEX_BUFFER, MAX_ELEMENT_BUFFER);
        glfwSwapBuffers(window);
    }
    cubemapTexture.Free();
    exit(EXIT_SUCCESS);
}


#pragma region callback
void glfw_error_callback(int code, const char* message){

    fprintf(stderr, "\"GLFW::ERROR::ERROR_CODE %i \n %s", code, message);
    exit(EXIT_FAILURE);
}

void glfw_window_size_callback(GLFWwindow* window, int xSize, int ySize){
    glViewport(0,0, xSize, ySize);
}

void glfw_window_refresh_callback(GLFWwindow* window){
    glfwSwapBuffers(window);
}

void processInput(GLFWwindow* window){

    float currentTime = glfwGetTime();
    deltaTime = currentTime - lastTime;
    lastTime = currentTime;


    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS){
        glfwSetWindowShouldClose(window,true);
    }
    if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS){
        camera.translateCameraMatrix(Camera::Forward, 2 * deltaTime);
    }
    if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS){
        camera.translateCameraMatrix(Camera::Backward, 2 * deltaTime);
    }
    if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS){
        camera.translateCameraMatrix(Camera::Right, 2 * deltaTime);
    }
    if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS){
        camera.translateCameraMatrix(Camera::Left, 2 * deltaTime);
    }

}
void glfw_mouse_button_callback(GLFWwindow* window, int button, int action, int mod){

    if(button == GLFW_MOUSE_BUTTON_RIGHT && action == GLFW_PRESS)
    {
        isRotating = true;
        glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);
    }else if(button == GLFW_MOUSE_BUTTON_RIGHT && action == GLFW_RELEASE){
        isRotating = false;
        glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_NORMAL);
    }
}


void cursor_position_callback(GLFWwindow* window, double xPos, double yPos){

    if(isRotating) {
        int x, y;
        glfwGetFramebufferSize(window, &x, &y);
        camera.rotateCameraMatrix(xPos, yPos, x / 2, y / 2);
    }
}
#pragma endregion callback