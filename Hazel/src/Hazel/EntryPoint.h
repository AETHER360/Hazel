#pragma once

#ifdef HZ_PLATFORM_WINDOWS

//This is basically a funciton that we will define somewhere else, which will return that application for us.
extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv) 
{
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif