#include <iostream>
#include <string>
#include <Windows.h>

#include "../GreetingStaticLibrary/Greeting.h"


int main()
{
   
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string name;
    std::cout << "Введите имя: ";
    std::getline(std::cin, name); 
    
    Greeter greeter;
    std::string result = greeter.greet(name);
    std::cout << result << std::endl;


    return 0;
}