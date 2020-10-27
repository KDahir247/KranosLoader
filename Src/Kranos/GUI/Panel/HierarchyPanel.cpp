//
// Created by kdahi on 2020-09-30.
//

#include "HierarchyPanel.h"
#include <nuklear.h>

//test TODO remove
/*NK_API int nk_tab (struct nk_context *ctx, const char *title, int active)
{
    const struct nk_user_font *f = ctx->style.font;
    float text_width = f->width(f->userdata, f->height, title, nk_strlen(title));
    float widget_width = text_width + 3 * ctx->style.button.padding.x;
    nk_layout_row_push(ctx, widget_width);
    struct nk_style_item c = ctx->style.button.normal;
    if (active) {ctx->style.button.normal = ctx->style.button.active;}
    int r = nk_button_label (ctx, title);
    ctx->style.button.normal = c;
    return r;
}*/

HierarchyPanel::HierarchyPanel(struct nk_context *nkContext, int width, int height) {
    this->width = width;
    this->height = height;

    context = nkContext;

    WindowEvent::AddListener()->GetEventListener()
    .filter([&](const WindowEventArgs& windowEventArgs){
        return this->width != windowEventArgs.width || height != windowEventArgs.height;
    })
    .subscribe([&](const WindowEventArgs& windowEventArgs){
        this->width = windowEventArgs.width;
        this->height = windowEventArgs.height;
    });
}

void HierarchyPanel::OnBeginStyle() {

//    nk_style_push_color(ctx, &s->window.background, nk_rgba(45,45,45,240));
//    nk_style_push_style_item(ctx, &s->window.fixed_background, nk_style_item_color(nk_rgba(45,45,45,240)));
}

void HierarchyPanel::OnEndStyle() {
//        nk_style_pop_color(ctx);
//        nk_style_pop_style_item(ctx);
}

void HierarchyPanel::OnBegin() {
    OnBeginStyle();
    if(nk_begin(context, "Entity Property", nk_rect((width - width / 6.0f), 20.0f, width / 6.0f, height  - 320),
                NK_WINDOW_BORDER | NK_WINDOW_TITLE | NK_WINDOW_NO_SCROLLBAR)) {

        OnDraw();
        OnEnd();
    }
    OnEndStyle();
}

void HierarchyPanel::OnDraw() {



    nk_layout_row_dynamic(context, 200, 1);
    if (nk_group_begin(context, "Group", NK_WINDOW_BORDER )){

        static int selected[25];
        nk_layout_row_static(context, 18, 100,1);
        for (int i = 0; i < 2; ++i) {
            if (nk_selectable_label(context, "obj", NK_TEXT_CENTERED, &selected[i])){
                printf("selected model object %i", selected[i]);
            }

        }
        nk_group_end(context);
    }
}

void HierarchyPanel::OnEnd() {
    nk_end(context);
}

HierarchyPanel::~HierarchyPanel() {
}
