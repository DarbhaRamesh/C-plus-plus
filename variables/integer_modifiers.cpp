#include <iostream>

int main() {
    /*
    
    unsigned int -> 0 to 2**n -1
    signed int -> 2**(n-1) to 2**(n-1) -1
    short -> 2 bytes 
    long -> 4 or 8 bytes
    long long -> 8 bytes

    */

   signed int value1 {10};
   signed int value2 {-10};
   unsigned int value3 {10};
   // unsigned int value4 {-10}; compilation error - stores only +ve integers


   std::cout << "size of short int" << sizeof(short int) << std::endl;
   std::cout << "size of long int" << sizeof(long int) << std::endl;
   std::cout << "size of long long int" << sizeof(long long int) << std::endl;
}