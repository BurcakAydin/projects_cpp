#include <iostream>
#include <string>

using namespace std;

int main()
{
    int age = 40;
    int *pAge = &age;
    double gpa = 3.78;
    double *pGpa = &gpa;
    string name = "Burcuk";
    string *pName = &name;

    cout << *pAge << endl;
    cout << &age << endl;
    cout << *&age << endl;
    cout << &*&age << endl;

    return 0;
}


/* 
int main()
{
    int age = 40;
    double gpa = 3.78;
    string name = "Burcuk";

    cout << "Age: " << age << endl;
    cout << "Gpa: " << gpa << endl;
    cout << "Name: " << name << endl;

    return 0;
}
 */