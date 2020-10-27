//
// Created by kdahi on 2020-09-27.
//

#ifndef KRANOS_KRANOSCONTEXT_H
#define KRANOS_KRANOSCONTEXT_H
#include "Kranos.h"
#include "ApplicationEvent.h"
#include <GUI/NuklearLayer.h>


namespace Kranos {

    class KranosContext : public Application {

    public:
        KranosContext();

        ~KranosContext() override;
        void PushLayer(Layer* layer) override;
        void PushOverlay(Layer* overlay) override;
        void Run() override;

    private:
        std::shared_ptr<Kranos::Window> m_Window;
        WindowProp prop;

    };
}
#endif //KRANOS_KRANOSCONTEXT_H
