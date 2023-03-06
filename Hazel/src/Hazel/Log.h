#pragma once

#include <spdlog/spdlog.h>

#include "Core.h"

namespace Hazel
{
    class HAZEL_API Log
    {
    private:
        static std::shared_ptr<spdlog::logger> core_logger;
        static std::shared_ptr<spdlog::logger> client_logger;

    public:
        static std::shared_ptr<spdlog::logger> getCoreLogger()
        {
            return core_logger;
        }

        static std::shared_ptr<spdlog::logger> getClientLogger()
        {
            return client_logger;
        }


        static void init();
    };
}

// Core Log Pre-definitions
#define HAZEL_CORE_ERROR(...)   ::Hazel::Log::getCoreLogger()->error(__VA_ARGS__)
#define HAZEL_CORE_WARN(...)    ::Hazel::Log::getCoreLogger()->warn(__VA_ARGS__)
#define HAZEL_CORE_INFO(...)    ::Hazel::Log::getCoreLogger()->info(__VA_ARGS__)
#define HAZEL_CORE_TRACE(...)   ::Hazel::Log::getCoreLogger()->trace(__VA_ARGS__)


// Client Log Pre-definitions
#define HAZEL_ERROR(...)        ::Hazel::Log::getClientLogger()->error(__VA_ARGS__)
#define HAZEL_WARN(...)         ::Hazel::Log::getClientLogger()->warn(__VA_ARGS__)
#define HAZEL_INFO(...)         ::Hazel::Log::getClientLogger()->info(__VA_ARGS__)
#define HAZEL_TRACE(...)        ::Hazel::Log::getClientLogger()->trace(__VA_ARGS__)

