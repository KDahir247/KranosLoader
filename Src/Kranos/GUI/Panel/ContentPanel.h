//
// Created by kdahi on 2020-09-30.
//

#ifndef KRANOS_CONTENTPANEL_H
#define KRANOS_CONTENTPANEL_H
#include <kpch.h>
#include "GUIPanel.h"
#include "WindowEvent.h"

class ContentPanel : public GUIPanel{

public:
    ContentPanel(struct nk_context* nkContext, int width, int height);
    void OnBeginStyle() override;
    void OnEndStyle() override;
    void OnBegin() override;
    void OnDraw() override;
    void OnEnd() override;
    inline ~ContentPanel() override;

private:
    int width{}, height{};
    struct nk_context* context;



};


#endif //KRANOS_CONTENTPANEL_H
