#include <iostream>
#include <string>
#include <Windows.h>

#include "../LeavingLibraryDynamic/Leaving.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string name;
	std::cout << "Введите имя: ";
	std::getline(std::cin, name);
	
	Leaver leaving;
	std::string message = leaving.leave(name);
	std::cout << message << std::endl;


	return 0;
}