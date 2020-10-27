//
// Created by kdahi on 2020-09-30.
//

#include "LogPanel.h"
#include <nuklear.h>

LogPanel::LogPanel(struct nk_context *nkContext, int width, int height) {

    this->width = width;
    this->height = height;

    context = nkContext;

    //Events
    //Log Event for capturing the messages from the application
    LogEvent::AddListener()->GetEventListener()
    .subscribe([&](const LogEventArgs& logEventArgs){
        receivedEventArgs.emplace_back(LogEventArgs{logEventArgs.severity, logEventArgs.message});
    });

    //Window Event for capturing window sizing
    WindowEvent::AddListener()->GetEventListener()
            .filter([&](const WindowEventArgs& windowEventArgs){
                return width != windowEventArgs.width || height != windowEventArgs.height;
            })
            .subscribe([&](const WindowEventArgs& windowEventArgs){
                this->width = windowEventArgs.width;
                this->height = windowEventArgs.height;
            });


}

void LogPanel::OnBeginStyle() {
//    struct nk_style *s = &context->style;
//    nk_style_push_color(context, &s->window.background, nk_rgba(45,45,45,240));
//    nk_style_push_style_item(context, &s->window.fixed_background, nk_style_item_color(nk_rgba(45,45,45,240)));
}

void LogPanel::OnEndStyle() {
//        nk_style_pop_color(ctx);
//    nk_style_pop_style_item(ctx);
}

void LogPanel::OnBegin() {
    OnBeginStyle();
    if (nk_begin(context, "Logger", nk_rect(width / 2, height - 300, width / 2, 300),
                 NK_WINDOW_TITLE | NK_WINDOW_BORDER)) {

        OnDraw();
        OnEnd();
    }
    OnEndStyle();
}
void LogPanel::OnDraw() {
//Critical = 0, Error = 1, Warning = 2, Debug = 3, Trace = 4, Info = 5
    nk_layout_row_dynamic(context, 7, 1);
        for(const auto & logKeyValue : receivedEventArgs){


            nk_label_colored(context, logKeyValue.message.c_str(), NK_TEXT_LEFT,
                             nk_rgba(colorPalette[logKeyValue.severity][0],
                                     colorPalette[logKeyValue.severity][1],
                                     colorPalette[logKeyValue.severity][2],
                                     colorPalette[logKeyValue.severity][3]));

        }

    //        nk_spacing(ctx,1);

//        struct nk_command_buffer* canvas = nk_window_get_canvas(ctx);
//        struct nk_rect space;
//        nk_widget(&space, ctx);
//        nk_fill_rect(canvas,space, 6,nk_black);
}

void LogPanel::OnEnd() {
    nk_end(context);

}

LogPanel::~LogPanel() {
}
