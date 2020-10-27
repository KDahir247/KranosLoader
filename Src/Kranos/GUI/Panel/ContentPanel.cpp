//
// Created by kdahi on 2020-09-30.
//

#include "ContentPanel.h"
#include <nuklear.h>
ContentPanel::ContentPanel(struct nk_context *nkContext, int width, int height) {

    this->width = width;
    this->height = height;
    context = nkContext;

    WindowEvent::AddListener()->GetEventListener()
    .filter([&](const WindowEventArgs& windowEventArgs){
        return this->width != windowEventArgs.width || this->height != windowEventArgs.height;
    })
    .subscribe([&](const WindowEventArgs& windowEventArgs){
       this->width = windowEventArgs.width;
       this->height = windowEventArgs.height;
    });
}

void ContentPanel::OnBeginStyle() {
//    struct nk_style *s = &context->style;
//    nk_style_push_color(context, &s->window.background, nk_rgba(45,45,45,255));
//    nk_style_push_style_item(context, &s->window.fixed_background, nk_style_item_color(nk_rgba(45,45,45,255)));
}

void ContentPanel::OnEndStyle() {
//    nk_style_pop_color(context);
//    nk_style_pop_style_item(context);
}

void ContentPanel::OnBegin() {
    OnBeginStyle();
    if (nk_begin(context, "Content", nk_rect(0 , height - 300, width / 2, 300), NK_WINDOW_BORDER | NK_WINDOW_TITLE)) {

        OnDraw();
        OnEnd();
    }
    OnEndStyle();
}

void ContentPanel::OnDraw() {

}

void ContentPanel::OnEnd() {
nk_end(context);
}

ContentPanel::~ContentPanel() {
}
