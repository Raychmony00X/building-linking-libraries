#pragma once
#include <string>

#ifdef LEAVINGLIBRARYDYNAMIC_EXPORTS
#define LEAVINGLIBRARY_API __declspec(dllexport)
#else
#define LEAVINGLIBRARY_API __declspec(dllimport)
#endif

class LEAVINGLIBRARY_API Leaver
{
public:
	std::string leave(std::string name);
};