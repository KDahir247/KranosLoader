//
// Created by kdahi on 2020-09-30.
//

#include "PropertyPanel.h"

#include <nuklear.h>

PropertyPanel::PropertyPanel(struct nk_context *nkContext, int width, int height) {
    this->width = width;
    this->height = height;

    context = nkContext;

    WindowEvent::AddListener()->GetEventListener()
            .subscribe([&](const WindowEventArgs& windowEventArgs){
                this->width = windowEventArgs.width;
                this->height = windowEventArgs.height;
            });
}

void PropertyPanel::OnBeginStyle() {
//    struct nk_style *s = &context->style;
//    nk_style_push_color(context, &s->window.background, nk_rgba(45,45,45,255));
//    nk_style_push_style_item(context, &s->window.fixed_background, nk_style_item_color(nk_rgba(45,45,45,255)));
}

void PropertyPanel::OnEndStyle() {
//    nk_style_pop_color(context);
//    nk_style_pop_style_item(context);
}

void PropertyPanel::OnBegin() {
    OnBeginStyle();
    if (nk_begin(context, "Kranos Loader", nk_rect(0, 20.0f, width/ 4.0f, height - 320),
                 NK_WINDOW_BORDER | NK_WINDOW_TITLE)){

        OnDraw();
        OnEnd();
    }
    OnEndStyle();
}

void PropertyPanel::OnDraw() {
    if (nk_tree_push(context, NK_TREE_TAB, "Object Properties", NK_MINIMIZED)){

        //TODO Change to glm::vec3 or equivalent
        static float position[3];
        static float  rotation[3];
        static float scale[3];

        char positionBuffer[30];
        char rotationBuffer[30];
        char scaleBuffer[30];


        nk_text(context, "Position", strlen("Position"), NK_TEXT_LEFT);
        sprintf(positionBuffer, "%.2f, %.2f, %.2f", position[0], position[1], position[2]);
        if (nk_combo_begin_label(context, positionBuffer, nk_vec2(200, 200))){
            nk_layout_row_dynamic(context, 25, 1);
            nk_property_float(context, "#X", -INFINITY, &position[0], INFINITY, 1.0f, 0.5f);
            nk_property_float(context,"#Y", -1024.0f, &position[1], INFINITY, 1.0f, 0.5f);
            nk_property_float(context, "#Z", -INFINITY,&position[2], INFINITY, 1.0f, 0.5f);
            nk_combo_end(context);
        }

        nk_text(context, "Rotation", strlen("Rotation"), NK_TEXT_LEFT);
        sprintf(rotationBuffer, "%.2f, %.2f, %.2f", rotation[0], rotation[1], rotation[2]);
        if(nk_combo_begin_label(context, rotationBuffer, nk_vec2(200,200))){
            nk_layout_row_dynamic(context, 25, 1);
            nk_property_float(context, "#Pitch", -INFINITY, &rotation[0], INFINITY, 1.0f, 0.5f);
            nk_property_float(context, "#Yaw", -INFINITY, &rotation[1], INFINITY, 1.0f, 0.5f);
            nk_property_float(context, "#Roll", -INFINITY, &rotation[2], INFINITY, 1.0f, 0.5f);
            nk_combo_end(context);
        }

        nk_text(context, "Scale", strlen("Scale"), NK_TEXT_LEFT);
        sprintf(scaleBuffer, "%.2f, %.2f, %.2f", scale[0], scale[1], scale[2]);
        if(nk_combo_begin_label(context, scaleBuffer, nk_vec2(200,200))){
            nk_layout_row_dynamic(context, 25, 1);
            nk_property_float(context, "#Width", -INFINITY, &scale[0], INFINITY, 1.0f, 0.5f);
            nk_property_float(context, "#Height", -INFINITY, &scale[1], INFINITY, 1.0f, 0.5f);
            nk_property_float(context, "#Depth", -INFINITY, &scale[2], INFINITY, 1.0f, 0.5f);
            nk_combo_end(context);
        }


        nk_tree_pop(context);

        //Material

    }

    if (nk_tree_push(context, NK_TREE_TAB, "Lighting Properties", NK_MINIMIZED)){
//        nk_checkbox_label(context, "Enable Lighting", &success);

        nk_tree_pop(context);
    }

    if (nk_tree_push(context, NK_TREE_TAB, "Environment Properties", NK_MINIMIZED)){

        if (nk_tree_push(context, NK_TREE_NODE, "Skybox", NK_MINIMIZED)){

            nk_layout_row_dynamic(context, 30, 3);
            if(nk_button_label(context, "Sunny")){
            }
            if(nk_button_label(context, "Glorious")){
            }
            if(nk_button_label(context, "Space")){
            }
            if (nk_button_label(context, "Cloudy"))
            {
            }
            if (nk_button_label(context, "Dusk"))
            {
            }
            if (nk_button_label(context, "Overcast"))
            {
            }
            if (nk_button_label(context, "C Night"))
            {
            }
            if (nk_button_label(context, "C Day")){
            }
            if (nk_button_label(context, "Night")){
            }

            nk_tree_pop(context);
        }
        //Set Skybox setting

        nk_tree_pop(context);
    }
}

void PropertyPanel::OnEnd() {
    nk_end(context);

}

PropertyPanel::~PropertyPanel() {
}
