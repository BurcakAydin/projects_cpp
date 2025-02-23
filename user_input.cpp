
#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main()

/* { 
    int age;
    cout << "--------------------------------\n";
    cout << "Enter your age: ";
    cin >> age;

    cout << "--------------------------------\n";
    cout << "You are " << age << " year old. ";
    return 0; 
}  */

{ 
    string name;
    cout << "--------------------------------\n";
    cout << "Enter your name:\n ";

    getline(cin, name);
    cout << "--------------------------------\n";
    cout << "Hello " << name;

    return 0; 
} 