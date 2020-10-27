//
// Created by kdahi on 2020-09-27.
//

#include "WindowsWindow.h"
namespace Kranos {

    Kranos::WindowsWindow::WindowsWindow(const WindowProp& prop) {
        KR_CORE_INFO("Created window")

        WindowEvent::AddListener()->GetEventListener()
        .subscribe([](WindowEventArgs e){
            glViewport(0,0,e.width,e.height);
        });

        Init(prop);
    }

    void WindowsWindow::OnUpdate() {

        glfwPollEvents();
        glfwSwapBuffers(window);
    }

    unsigned int WindowsWindow::GetHeight() {
        return windowProp.Height;
    }

    unsigned int WindowsWindow::GetWidth() {
        return windowProp.Width;
    }

    void WindowsWindow::SetVSync(bool enable) {

        if (enable){
            glfwSwapInterval(1);
        }else{
            glfwSwapInterval(0);
        }
        vSync = enable;
    }

    bool WindowsWindow::IsVSync() {
        return vSync;
    }

    void WindowsWindow::Init(const WindowProp& prop) {
        if(!glfwInit()){

            KR_CORE_CRITICAL("Failed to initialize glfw");
            exit(EXIT_FAILURE);
        }else{
            KR_CORE_INFO("Initialized GLFW");
        }

        //pre setup window
        glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
        glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
        glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
        glfwWindowHint(GLFW_SAMPLES, 8);

        windowProp.Width = prop.Width;
        windowProp.Height = prop.Height;
        windowProp.Title = prop.Title;

        window = glfwCreateWindow(windowProp.Width, windowProp.Height, windowProp.Title.c_str(), nullptr, nullptr);

        if (!window){
            glfwDestroyWindow(window);
            glfwTerminate();
            KR_CORE_CRITICAL("Failed to create glfw window");
        }else{
            KR_CORE_INFO("Created glfw window")
        }
        glfwMakeContextCurrent(window);

        if(!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)){
            glfwDestroyWindow(window);
            glfwTerminate();
            KR_CORE_CRITICAL("Failed to load GL glad");
        }else{
            KR_CORE_INFO("Initialized GL glad");
        }

        glViewport(0,0, prop.Width, prop.Height);

        SetVSync(true);

        //GLFW event callbacks
        glfwSetKeyCallback(window,[](GLFWwindow* window, int key, int scanCode, int action, int mods){
            KeyboardEventArgs keyEvent{};
            keyEvent.key = key;
            keyEvent.scanCode = scanCode;
            keyEvent.action = action;
            keyEvent.mods = mods;
            KeyboardEvent::AddListener()->OnNext(keyEvent);
        });
        glfwSetCursorPosCallback(window, [](GLFWwindow* window, double xPos, double yPos){
            MouseEventArgs mouseEvent{};
            mouseEvent.xPos = xPos;
            mouseEvent.yPos = yPos;
            MouseEvent::AddListener()->OnNext(mouseEvent);
        });
        glfwSetMouseButtonCallback(window, [](GLFWwindow* window, int button, int action, int mods){
            MouseEventArgs mouseEvent{};
            mouseEvent.button = button;
            mouseEvent.action = action;
            mouseEvent.mods = mods;
           MouseEvent::AddListener()->OnNext(mouseEvent);
        });
        glfwSetErrorCallback([](int error, const char* description){
            LogEventArgs logEvent{};
            logEvent.message = description;
            LogEvent::AddListener()->OnNext(logEvent);
        });
        glfwSetScrollCallback(window, [](GLFWwindow* window, double xOffset, double yOffset){
            MouseEventArgs mouseEvent{};
            mouseEvent.xOffset = xOffset;
            mouseEvent.yOffset = yOffset;
            MouseEvent::AddListener()->OnNext(mouseEvent);
        });
        glfwSetWindowSizeCallback(window,[](GLFWwindow* window, int width, int height){
            WindowEventArgs windowEvent{};
            windowEvent.width = width;
            windowEvent.height = height;
            WindowEvent::AddListener()->AddListener()->OnNext(windowEvent);
        });
        glfwSetWindowCloseCallback(window,[](GLFWwindow* window) {
            ApplicationEvent::AddListener()->OnNext(AppEventArgs{ true});
        });
    }

    void WindowsWindow::ShutDown() {
        glfwDestroyWindow(window);
        //delete window;
        glfwTerminate();
    }

    WindowsWindow::~WindowsWindow() {
        ShutDown();
    }


    Window *Window::CreateAppWindow(const WindowProp& prop) {
        return new WindowsWindow(prop);
    }


}