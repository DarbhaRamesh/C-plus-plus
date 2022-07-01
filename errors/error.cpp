#include <iostream>

int main() {
    // compile time error
    std::cout << "Hello world!!" << std::endl;

    // runtime errors
    int value = 1/0;
    std::cout << value ;
    return 0;
}