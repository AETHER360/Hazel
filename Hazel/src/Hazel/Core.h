#pragma once

/*
Here we are defining a macro that will be either dllexport or dllimport, depending on whether or not we are building this DLL file.
__declspec is a Windows only thing.
When we build the Hazel library then the dllexport will be active, and for sandbox the dllimport will be active.
*/
#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define HAZEL_API __declspec(dllexport)
	#else
		#define HAZEL_API __declspec(dllimport)
	#endif
#else
	#error Hazel only supports Windows for now!
#endif

