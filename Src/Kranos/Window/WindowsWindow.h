//
// Created by kdahi on 2020-09-27.
//

#ifndef KRANOS_WINDOWSWINDOW_H
#define KRANOS_WINDOWSWINDOW_H
#include "Kranos.h"

#include "ApplicationEvent.h"
#include "KeyboardEvent.h"
#include "MouseEvent.h"
#include "LogEvent.h"
#include "WindowEvent.h"

namespace Kranos {
    class WindowsWindow : public Window{
    public:
        explicit WindowsWindow(const WindowProp& prop);
        ~WindowsWindow();

        void OnUpdate() override;
        unsigned int GetHeight() override;
        unsigned int GetWidth() override;

        void SetVSync(bool enable) override;
        bool IsVSync() override;

    private:
        bool vSync{};
        void Init(const WindowProp& prop);
        void ShutDown();
        WindowProp windowProp;


    };

}


#endif //KRANOS_WINDOWSWINDOW_H
