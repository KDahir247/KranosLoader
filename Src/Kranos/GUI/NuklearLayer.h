//
// Created by kdahi on 2020-09-29.
//

#ifndef KRANOS_NUKLEARLAYER_H
#define KRANOS_NUKLEARLAYER_H
#include <kpch.h>

#include "Layer.h"
#include "LogEvent.h"
#include "Log.h"



//Make a single header
#include "Panel/LogPanel.h"
#include "Panel/MenuPanel.h"
#include "Panel/HierarchyPanel.h"
#include "Panel/PropertyPanel.h"
#include "Panel/ContentPanel.h"

#define MAX_VERTEX_BUFFER 512 * 1024
#define MAX_ELEMENT_BUFFER 128 * 1024

class NuklearLayer : public Layer {

public:
    NuklearLayer();
    ~NuklearLayer() override;
    void OnAttach() override;
    void OnUpdate() override;
    void OnDetach() override;
    void SetFont(const char* path, float height);
    void SetStyle(enum themeStyle theme);

    static void PostRender(bool ANTIALIAS);

private:
    int width{}, height{};
    std::vector<GUIPanel*> GUIPanel;
};


#endif //KRANOS_NUKLEARLAYER_H
