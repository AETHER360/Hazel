#pragma once

#include "Core.h"

namespace Hazel {
	/*
	To use this class inside sandbox we need to export it since it is a DLL. When we build it we use __declspec(dllexport) and 
	when we include it we use __declspec(dllimport)
	*/
	class HAZEL_API Application
	{
	public:
		Application();
		//Made the destructor virtual because this class will actually be inherited/sub-classed by our sandbox application
		virtual ~Application();

		void Run();
	};

	//To be defined in CLIENT
	Application* CreateApplication();

}
