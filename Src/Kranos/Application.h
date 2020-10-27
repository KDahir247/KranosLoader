//
// Created by kdahi on 2020-09-26.
//

#ifndef KRANOS_APPLICATION_H
#define KRANOS_APPLICATION_H
#include <kpch.h>
#include "LayerStack.h"
namespace Kranos {

    class Application {
    public:
        Application();
        virtual ~Application() = 0;
        virtual void Run() = 0;
        virtual void PushLayer(Layer* layer) = 0;
        virtual void PushOverlay(Layer* overlay) = 0;
    protected:
        LayerStack m_LayerStack;
    };

    Application* CreateApplication();
}
#endif //KRANOS_APPLICATION_H
