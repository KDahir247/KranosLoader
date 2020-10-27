//
// Created by kdahi on 2020-09-29.
//

#include "NuklearLayer.h"

#include <glad/glad.h>
#define NK_INCLUDE_FIXED_TYPES
#define NK_INCLUDE_STANDARD_IO
#define NK_INCLUDE_STANDARD_VARARGS
#define NK_INCLUDE_DEFAULT_ALLOCATOR
#define NK_INCLUDE_VERTEX_BUFFER_OUTPUT
#define NK_INCLUDE_FONT_BAKING
#define NK_INCLUDE_DEFAULT_FONT
#define NK_IMPLEMENTATION
#define NK_GLFW_GL3_IMPLEMENTATION
#define NK_KEYSTATE_BASED_INPUT
#include <nuklear.h>
#include <demo/glfw_opengl3/nuklear_glfw_gl3.h>

#include "Style/KranosStyle.h"

struct nk_context* ctx;
struct nk_glfw glfw;


NuklearLayer::NuklearLayer() : Layer("NuklearLayer") {

    glfwGetWindowSize(glfwGetCurrentContext(),&width, &height);
    ctx = nk_glfw3_init(&glfw, glfwGetCurrentContext(), NK_GLFW3_INSTALL_CALLBACKS);

    GUIPanel.emplace_back(new MenuPanel(ctx, width, height));
    GUIPanel.emplace_back(new PropertyPanel(ctx,width, height));
    GUIPanel.emplace_back(new HierarchyPanel(ctx, width, height));
    GUIPanel.emplace_back(new LogPanel(ctx,width, height));
    GUIPanel.emplace_back(new ContentPanel(ctx, width, height));

    SetFont("../../Fonts/Open_Sans/OpenSans-SemiBold.ttf", 15);
}

void NuklearLayer::OnAttach() {
    LogEvent::AddListener()->OnNext(LogEventArgs{Info, Kranos::log_to_str(spdlog::level::info,"GUI Initialized successfully. ", spdlog::pattern_time_type::local, "NuklearLayer Call")});
    SetStyle(THEME_BLACK);
}

void NuklearLayer::OnUpdate() {

    nk_glfw3_new_frame(&glfw);

    for(auto panel : GUIPanel){
        panel->OnBegin();
    }
}


void NuklearLayer::SetFont(const char *path, float height) {
    //font
    {
        struct nk_font_atlas *atlas;
        nk_glfw3_font_stash_begin(&glfw, &atlas);
        struct nk_font* nkFont = nk_font_atlas_add_from_file(atlas, path, height, nullptr);

        nk_glfw3_font_stash_end(&glfw);
        nk_style_set_font(ctx, &nkFont->handle);
    }
}

void NuklearLayer::OnDetach() {
}

NuklearLayer::~NuklearLayer() {
    for(auto panel : GUIPanel){
        delete panel;
    }
}

void NuklearLayer::PostRender(bool ANTIALIAS) {
    if (ANTIALIAS)
        nk_glfw3_render(&glfw, NK_ANTI_ALIASING_ON, MAX_VERTEX_BUFFER, MAX_ELEMENT_BUFFER);
    else
        nk_glfw3_render(&glfw, NK_ANTI_ALIASING_OFF, MAX_VERTEX_BUFFER, MAX_ELEMENT_BUFFER);

}

void NuklearLayer::SetStyle(enum themeStyle theme) {
    set_style(ctx,theme);
}



