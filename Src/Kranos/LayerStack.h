//
// Created by kdahi on 2020-09-29.
//

#ifndef KRANOS_LAYERSTACK_H
#define KRANOS_LAYERSTACK_H

#include <kpch.h>
#include "Layer.h"

class LayerStack {
public:
    LayerStack();
    ~LayerStack();



    void PushLayer(Layer* layer);
    void PushOverlay(Layer* overlay);
    void PopLayer(Layer* layer);
    void PopOverlay(Layer* overlay);

    std::vector<Layer*>::iterator begin(){return m_Layers.begin();}
    std::vector<Layer*>::iterator end(){return m_Layers.end();}
private:
    std::vector<Layer*> m_Layers;
    std::vector<Layer*>::iterator m_LayerInsert;
};


#endif //KRANOS_LAYERSTACK_H
