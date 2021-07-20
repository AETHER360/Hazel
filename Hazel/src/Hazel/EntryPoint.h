#pragma once

#ifdef HZ_PLATFORM_WINDOWS

//This is basically a funciton that we will define somewhere else, which will return that application for us.
extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv) 
{
	Hazel::Log::Init();
	HZ_CORE_WARN("Initialized Log!");
	HZ_INFO("Test!");
	int a = 5;
	HZ_FATAL("Test! var={0}", a);
	HZ_ERROR("Test!");

	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif