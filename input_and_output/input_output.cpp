#include <iostream>
using namespace std;

int main() {
    
    cout << "cout: Print data to console" << endl;
    cerr << "cerr: Something is wrong" << endl;
    clog << "clog: log message" << endl;
    
    string name;
    int age;
    
    cout << "Enter your name without spaces: ";
    cin >> name;
    cout << "Your name is: " << name << endl;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Your age is: " << age << endl;

    cout << "Enter your name without spaces and age seperated by space: ";
    cin >> name >> age;
    cout << "Hello " << name << "! You are " << age << " years old." << endl;
    return 0;
}