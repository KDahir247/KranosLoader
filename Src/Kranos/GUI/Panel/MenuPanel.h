//
// Created by kdahi on 2020-09-30.
//

#ifndef KRANOS_MENUPANEL_H
#define KRANOS_MENUPANEL_H
#include <kpch.h>
#include "GUIPanel.h"
#include "WindowEvent.h"
#include "ApplicationEvent.h"

class MenuPanel : public GUIPanel {
public:
    MenuPanel(struct nk_context* nkContext, int width, int height);
    void OnBeginStyle() override;
    void OnEndStyle() override;
    void OnBegin() override;
    void OnDraw() override;
    void OnEnd() override;
    inline ~MenuPanel() override;

private:
    int width{}, height{};
    struct nk_context* context;

    bool show_application_file_property = false;

};


#endif //KRANOS_MENUPANEL_H
