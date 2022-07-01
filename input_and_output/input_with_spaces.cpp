#include <iostream>

int main() {
    int age;
    std::string full_name;
    std::cout << "Enter your full name :" << std::endl;
    std::getline(std::cin, full_name);
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "Hello " << full_name << "! You are " << age << " years old." << std::endl;
}