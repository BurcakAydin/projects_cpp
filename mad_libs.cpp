
#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main()

{ 
    string color, pluralNoun, celebrity;
    cout << "Enter a color:  " << endl;
    getline(cin, color);
    cout << "Enter a plural noun:  " << endl;
    getline(cin, pluralNoun);
    cout << "Enter a celebrity:  " << endl;
    getline(cin, celebrity);

    cout << "Peonnies are " << color << endl;
    cout << pluralNoun << " are blue " << endl;
    cout << "I love  " << celebrity << endl;

    return 0; 
} 