//
// Created by kdahi on 2020-09-30.
//

#include "MenuPanel.h"

#include <nuklear.h>


MenuPanel::MenuPanel(struct nk_context *nkContext, int width, int height) {
    this->width = width;
    this->height = height;

    context  = nkContext;

    WindowEvent::AddListener()->GetEventListener()
    .subscribe([&](const WindowEventArgs& windowEventArgs){
        this->width = windowEventArgs.width;
        this->height = windowEventArgs.height;
    });
}

void MenuPanel::OnBeginStyle() {
    struct nk_style *s = &context->style;
    nk_style_push_color(context, &s->window.background, nk_rgba(45,45,45,255));
    nk_style_push_style_item(context, &s->window.fixed_background, nk_style_item_color(nk_rgba(45,45,45,255)));
}

void MenuPanel::OnEndStyle() {
    nk_style_pop_color(context);
    nk_style_pop_style_item(context);
}

void MenuPanel::OnBegin() {
    OnBeginStyle();
    if (nk_begin(context, "Menu", nk_rect(0, 0, width, 20), NK_WINDOW_NO_SCROLLBAR | NK_WINDOW_BORDER)) {
        OnDraw();

        OnEnd();
    }
    OnEndStyle();
}

void MenuPanel::OnDraw() {

    nk_layout_row_begin(context, NK_STATIC, 10, 5);
    nk_layout_row_push(context, 40);

    if(nk_menu_begin_label(context, "File", NK_TEXT_LEFT, nk_vec2(200, 400))){
        nk_layout_row_dynamic(context, 25, 1);
        if (nk_menu_item_label(context, "New", NK_TEXT_LEFT)){
        }
        if (nk_menu_item_label(context, "Open", NK_TEXT_LEFT)){

        }
        if (nk_menu_item_label(context, "Save", NK_TEXT_LEFT)){

        }
        if (nk_menu_item_label(context,"File Property", NK_TEXT_LEFT)){
            show_application_file_property = true;
        }
        if (nk_menu_item_label(context,"Close", NK_TEXT_LEFT)){

        }
        if (nk_menu_item_label(context, "Exit", NK_TEXT_LEFT)){

            //Send a event
            ApplicationEvent::AddListener()->OnNext(AppEventArgs{true});

        }
        nk_menu_end(context);

    }

    if (show_application_file_property){
        static struct nk_rect s = { width / 2.0f, height / 2.0f, 300, 500};
        if (nk_popup_begin(context, NK_POPUP_DYNAMIC, "About", NK_WINDOW_CLOSABLE,s)){

            nk_layout_row_dynamic(context, 20, 1);
            nk_label(context, "Kranos Loader", NK_TEXT_CENTERED);
            nk_spacing(context,1);
            nk_label(context, "Created by: Khalid Dahir" , NK_TEXT_LEFT);
            nk_label(context, "Current Version: 0", NK_TEXT_LEFT );
            nk_label(context, "License version: MIT", NK_TEXT_LEFT);

            nk_layout_row_static(context, 20, 40, 8);
            nk_spacing(context,5);
            if(nk_button_label(context,"Close")){
                show_application_file_property = false;
            }

            nk_popup_end(context);
        }else show_application_file_property = false;
    }


    if (nk_menu_begin_label(context, "Edit",NK_TEXT_LEFT, nk_vec2(200, 400))){

        nk_layout_row_dynamic(context, 25, 1);
        if (nk_menu_item_label(context, "Undo", NK_TEXT_LEFT)){

        }
        if (nk_menu_item_label(context, "Redo", NK_TEXT_LEFT)){

        }
        nk_menu_end(context);
    }

    if (nk_menu_begin_label(context, "Help", NK_TEXT_LEFT, nk_vec2(200, 400))){

        nk_layout_row_dynamic(context, 25, 1);
        if(nk_menu_item_label(context, "About", NK_TEXT_LEFT)){

        }
        if (nk_menu_item_label(context, "View Shortcuts", NK_TEXT_LEFT)){

        }
        if (nk_menu_item_label(context, "View Changelog", NK_TEXT_LEFT)){

        }
        if (nk_menu_item_label(context, "View Licensing", NK_TEXT_LEFT)){

        }

        nk_menu_end(context);
    }
}

void MenuPanel::OnEnd() {
    nk_end(context);
}

MenuPanel::~MenuPanel() {

}
