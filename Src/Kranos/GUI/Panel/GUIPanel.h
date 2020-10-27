//
// Created by kdahi on 2020-09-30.
//

#ifndef KRANOS_GUIPANEL_H
#define KRANOS_GUIPANEL_H

struct nk_context;

class GUIPanel {

public:
    virtual void OnBeginStyle() = 0;
    virtual void OnEndStyle() = 0;
    virtual void OnBegin() = 0;
    virtual void OnDraw() = 0;
    virtual void OnEnd() = 0;
    inline virtual ~GUIPanel() = default;

};


#endif //KRANOS_GUIPANEL_H
