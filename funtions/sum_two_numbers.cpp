#include <iostream>

/* 
return_type name_of_the_function(parameters) {
    block of statements;
    return variable or expression;
}
*/
int sum_two_numbers(int first_number, int second_number){
    return first_number + second_number;
}

void add_numbers(int first_number, int second_number){
    int output = first_number + second_number;
    std::cout << "sum from function is: " << output << std::endl;
}

int main(int argc, char **argv){
    int first_number = 16;
    int second_number = 14;

    std::cout << "sum is: " << sum_two_numbers(first_number, second_number) << std::endl;
    std::cout << "sum is: " << sum_two_numbers(5,10) << std::endl;

    int output = sum_two_numbers(10,2);
    std::cout << "sum is: " << output << std::endl;

    add_numbers(5,6);

}