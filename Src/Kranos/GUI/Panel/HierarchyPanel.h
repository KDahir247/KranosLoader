//
// Created by kdahi on 2020-09-30.
//

#ifndef KRANOS_HIERARCHYPANEL_H
#define KRANOS_HIERARCHYPANEL_H
#include <kpch.h>
#include "GUIPanel.h"
#include "WindowEvent.h"

class HierarchyPanel : public GUIPanel{
public:
    HierarchyPanel(struct nk_context* nkContext, int width,int height);
    void OnBeginStyle() override;
    void OnEndStyle() override;
    void OnBegin() override;
    void OnDraw() override;
    void OnEnd() override;
    inline ~HierarchyPanel() override;

private:
    int width{}, height{};
    struct nk_context* context;

};


#endif //KRANOS_HIERARCHYPANEL_H
