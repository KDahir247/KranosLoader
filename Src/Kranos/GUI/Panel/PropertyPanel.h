//
// Created by kdahi on 2020-09-30.
//

#ifndef KRANOS_PROPERTYPANEL_H
#define KRANOS_PROPERTYPANEL_H
#include <kpch.h>
#include "GUIPanel.h"
#include "WindowEvent.h"
class PropertyPanel : public GUIPanel{

public:
    PropertyPanel(struct nk_context* nkContext, int width,int height);
    void OnBeginStyle() override;
    void OnEndStyle() override;
    void OnBegin() override;
    void OnDraw() override;
    void OnEnd() override;
    ~PropertyPanel() override;

private:
    int width{}, height{};
    struct nk_context* context;
};


#endif //KRANOS_PROPERTYPANEL_H
