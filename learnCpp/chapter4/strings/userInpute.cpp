#include <iostream>
#include <string>

int main()
{

    std::cout << "Enter your full name: ";
    std::string name;
    std::getline(std::cin >> std::ws, name);
    unsigned short age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "Your age + length of name is: " << (age + name.length()) << "\n";

    return 0;
}