#include <iostream>
#include <string>

using namespace std;

class Book {
public:
    string title;
    string author;
    int pages;

    // Constructor function
    Book(string t, string a, int p) {
        title = t;
        author = a;
        pages = p;
    }

    // Function to display book details
    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Pages: " << pages << endl;
    }
};

int main()
{
    // Creating objects using the constructor
    Book book1("A Book", "B Author", 500);
    Book book2("C Book", "D Author", 400);

    // Displaying book details
    book1.display();
    book2.display();

    return 0;
}
