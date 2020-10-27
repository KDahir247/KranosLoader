//
// Created by kdahi on 2020-09-27.
//

#ifndef KRANOS_LOG_H
#define KRANOS_LOG_H

#include <kpch.h>
#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_color_sinks.h>
#include "spdlog/sinks/ostream_sink.h"

namespace Kranos{
    class Log {
    public:
        static void Init();

        inline static std::shared_ptr<spdlog::logger>& GetCoreLogger(){return s_CoreLogger;}

    private:
        static std::shared_ptr<spdlog::logger> s_CoreLogger;

    };


    //TODO Both Debug And Trace doesn't produce an output in ostringstream
    template<typename... Args>
    static std::string log_to_str(spdlog::level::level_enum severity, const std::string &msg, const Args &... args)
    {
        std::ostringstream oss;
        auto oss_sink = std::make_shared<spdlog::sinks::ostream_sink_mt>(oss);
        spdlog::logger oss_logger("Kranos", oss_sink);
        oss_logger.set_level(spdlog::level::info);

        oss_logger.set_formatter(std::unique_ptr<spdlog::formatter>(new spdlog::pattern_formatter(args...)));

        oss_logger.log(severity, msg);

        return oss.str();
    }



}


#define KR_CORE_CRITICAL(...) Kranos::Log::GetCoreLogger()->critical(__VA_ARGS__);
#define KR_CORE_ERROR(...)    Kranos::Log::GetCoreLogger()->error(__VA_ARGS__);
#define KR_CORE_WARNING(...)  Kranos::Log::GetCoreLogger()->warning(__VA_ARGS__);
#define KR_CORE_DEBUG(...)    Kranos::Log::GetCoreLogger()->debug(__VA_ARGS__);
#define KR_CORE_TRACE(...)    Kranos::Log::GetCoreLogger()->trace(__VA_ARGS__);
#define KR_CORE_INFO(...)     Kranos::Log::GetCoreLogger()->info(__VA_ARGS__);




#endif //KRANOS_LOG_H
