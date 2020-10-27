//
// Created by kdahi on 2020-09-30.
//

#ifndef KRANOS_LOGPANEL_H
#define KRANOS_LOGPANEL_H
#include <kpch.h>
#include "GUIPanel.h"
#include "LogEvent.h"
#include "WindowEvent.h"


class LogPanel : public GUIPanel {

public:
    LogPanel(struct nk_context* nkContext, int width, int height);
    void OnBeginStyle() override;
    void OnEndStyle() override;
    void OnBegin() override;
    void OnDraw() override;
    void OnEnd() override;
    inline ~LogPanel() override;

private:
    int width{}, height{};
    nk_context* context;
    std::vector<LogEventArgs> receivedEventArgs;


    //int colorPalette[4]  {1, 3, 4, 5};

    //enum Severity{Critical = 0, Error = 1, Warning = 2, Debug = 3, Trace = 4, Info = 5};
    int colorPalette[6][4] = {
            {138,10,2,255},  //Critical Log Color Preset
            {243,54,7,255}, //Error Log Color Preset
            {243,137,12,255}, //Warning Log Color Preset
            {120,253,254,255}, //Debug Log Color Preset
            {255,255,255,255}, //Trace Log Color Preset
            {126,208,126,255}, //Info Log Color Preset
    };

};
#endif //KRANOS_LOGPANEL_H
