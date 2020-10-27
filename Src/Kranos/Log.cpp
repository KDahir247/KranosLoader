//
// Created by kdahi on 2020-09-27.
//
#include "Log.h"

#include <utility>

namespace Kranos {
    std::shared_ptr<spdlog::logger> Log::s_CoreLogger;

    void Log::Init() {
        spdlog::set_pattern("%^[%T] %n: %v%$");
        s_CoreLogger = spdlog::stdout_color_mt("KRANOS");
        s_CoreLogger->set_level(spdlog::level::trace);

    }





}