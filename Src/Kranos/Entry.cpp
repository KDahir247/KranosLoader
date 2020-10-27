//
// Created by kdahi on 2020-09-26.
//
#include "Kranos.h"

int main(){
    Kranos::Log::Init();
    auto app = Kranos::CreateApplication();
    app->Run();
    delete app;
}

