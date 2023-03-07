#pragma once
#include "Application.h"

#ifdef HAZEL_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char **argv)
{
    Hazel::Log::init();

    std::cout << "Hazel Engine..." << std::endl;
    auto app = Hazel::CreateApplication();
    app->run();
    delete app;
}

#endif

