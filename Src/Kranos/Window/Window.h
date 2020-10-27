//
// Created by kdahi on 2020-09-27.
//

#ifndef KRANOS_WINDOW_H
#define KRANOS_WINDOW_H

#include <kpch.h>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

namespace Kranos {

    struct WindowProp {

        std::string Title;
        unsigned int Width, Height;

        explicit WindowProp(std::string title = "Kranos Loader", int width = 1380, int height = 720)
                : Title(std::move(title)), Width(width), Height(height) {}
    };


    class Window {
    public:

        virtual void OnUpdate() = 0;

        virtual unsigned int GetHeight() = 0;

        virtual unsigned int GetWidth() = 0;

        virtual void SetVSync(bool enable) = 0;

        virtual bool IsVSync() = 0;

        static Window *CreateAppWindow(const WindowProp& prop);


    protected:
        GLFWwindow *window{};


    };


}

#endif //KRANOS_WINDOW_H
