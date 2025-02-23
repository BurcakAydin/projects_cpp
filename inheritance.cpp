#include <iostream>

using namespace std;

// Base class: Chef
class Chef {
public:
    void makeChicken() {
        cout << "The chef makes chicken" << endl;
    }

    void makeSalad() {
        cout << "The chef makes salad" << endl;
    }

    void makeSpecialDish() {
        cout << "The chef makes BBQ ribs" << endl;
    }
};

// Derived class: ItalianChef (inherits from Chef)
class ItalianChef : public Chef {
public:
    void makePasta() {
        cout << "The Italian chef makes pasta" << endl;
    }

    // Overriding the makeSpecialDish function
    void makeSpecialDish() {
        cout << "The Italian chef makes chicken parmesan" << endl;
    }
};

int main() {
    // Creating a Chef object
    Chef chef;
    chef.makeChicken();
    chef.makeSalad();
    chef.makeSpecialDish();

    cout << "------------------" << endl;

    // Creating an ItalianChef object
    ItalianChef italianChef;
    italianChef.makeChicken();  // Inherited from Chef
    italianChef.makeSalad();    // Inherited from Chef
    italianChef.makePasta();    // Unique to ItalianChef
    italianChef.makeSpecialDish(); // Overridden method

    return 0;
}
