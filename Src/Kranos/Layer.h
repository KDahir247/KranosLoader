//
// Created by kdahi on 2020-09-29.
//

#ifndef KRANOS_LAYER_H
#define KRANOS_LAYER_H

#include <kpch.h>

class Layer {

public:
    Layer(std::string  name = "Layer");
    virtual ~Layer();

    virtual void OnAttach(){}
    virtual void OnDetach(){}
    virtual void OnUpdate(){}

    inline const std::string& GetName() const {return m_DebugName;}

protected:
    std::string m_DebugName;
};


#endif //KRANOS_LAYER_H
