#include <string>
#pragma once
#ifdef LEAVELIB_EXPORTS
#define LEAVELIB_API __declspec(dllexport)
#else
#define LEAVELIB_API __declspec(dllimport)
#endif // LEAVELIB_EXPORTS

class Leaver
{
public:
	LEAVELIB_API std::string leave();
	LEAVELIB_API Leaver(std::string value);
private:
	std::string value;
};

