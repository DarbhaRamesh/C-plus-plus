#include <iostream>

int main(){

    // braced intializers
    int apple_count; // random value
    int orange_count {5};
    int mango_count {}; // intializes to 0

    std::cout << "Apple count: " << apple_count << std::endl;
    std::cout << "Orange count: " << orange_count << std::endl;
    std::cout << "Mango count: " << mango_count << std::endl;
    std::cout << "---------------" << std::endl;
    // int random_value {2.9};  compilation error

    //functional intialization

    int dog_count(5);
    int cat_count(10);
    int animal_cont (dog_count+cat_count);

    std::cout << "Dog Count: " << dog_count << std::endl;
    std::cout << "Cat Count: " << cat_count << std::endl;
    std::cout << "Animal Count: " << animal_cont << std::endl;

    int random_value(2.9); // truncates after decimal places
    std::cout << "Random Value: " <<random_value << std::endl;
    std::cout << "---------------" << std::endl;

    // asignment notation

    int x = 5;
    int y = 6;
    int z = x+y;
    int r = 2.9;

    std::cout << "x is :" << x << std::endl;
    std::cout << "y is :" << y << std::endl;
    std::cout << "z is :" << z << std::endl;
    std::cout << "r is :" << r << std::endl;
    std::cout << "---------------" << std::endl;


    // sizeof

    std::cout << "size of int is: " << sizeof(int) << std::endl;
    std::cout << "size of float is: " << sizeof(float) << std::endl;
    std::cout << "size of double is: " << sizeof(double) << std::endl;


    return 0;
}