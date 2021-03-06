//
// Created by kdahi on 2020-09-29.
//

#include "LayerStack.h"

LayerStack::LayerStack() {
    m_LayerInsert = m_Layers.begin();
}

LayerStack::~LayerStack() {
    for(Layer* layer : m_Layers)
        delete layer;
}

void LayerStack::PushLayer(Layer *layer) {
    layer->OnAttach();
    m_LayerInsert = m_Layers.emplace(m_LayerInsert, layer);
}

void LayerStack::PushOverlay(Layer *overlay) {
    overlay->OnAttach();
    m_Layers.emplace_back(overlay);

}

void LayerStack::PopLayer(Layer *layer) {

    auto it = std::find(m_Layers.begin(), m_Layers.end(), layer);
    if (it != m_Layers.end()){
        layer->OnDetach();
        m_Layers.erase(it);
        m_LayerInsert--;
    }
}

void LayerStack::PopOverlay(Layer *overlay) {
    auto it = std::find(m_Layers.begin(), m_Layers.end(), overlay);
    if (it != m_Layers.end()){
        overlay->OnDetach();
        m_Layers.erase(it);
    }
}
