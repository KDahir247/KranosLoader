//
// Created by kdahi on 2020-09-26.
//
#include "KranosContext.h"

//temp
namespace Kranos {

        KranosContext::KranosContext(){
            m_Window = std::shared_ptr<Window>(Window::CreateAppWindow(prop));

            m_LayerStack.PushLayer(new NuklearLayer());
     }

        KranosContext::~KranosContext(){

     }


    void KranosContext::PushLayer(Layer *layer) {
        m_LayerStack.PushLayer(layer);
    }


    void KranosContext::PushOverlay(Layer *overlay) {
        m_LayerStack.PopOverlay(overlay);
    }

    void KranosContext::Run(){

        while (!glfwWindowShouldClose(glfwGetCurrentContext())) {

            for(Layer* layer : m_LayerStack)
                layer->OnUpdate();

            glClear(GL_COLOR_BUFFER_BIT);
            glClearColor(0.1f, 0.1f, 0.1f, 1.0f);


            NuklearLayer::PostRender(true);

            m_Window->OnUpdate();

        }

    }



    Application *CreateApplication() {
        KR_CORE_INFO("Created Application Context")
        return new KranosContext();
    }
}
