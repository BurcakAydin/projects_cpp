#include <iostream>
#include <string>

using namespace std;

class Book {
public:
    string title;
    string author;
    int pages;
};

int main()
{
    Book book1;  
    book1.title = "A Book";
    book1.author = "B Author";
    book1.pages = 500;

    cout << "Title: " << book1.title << endl;
    cout << "Author: " << book1.author << endl;
    cout << "Pages: " << book1.pages << endl;

    Book book2;  
    book2.title = "C Book";
    book2.author = "D Author";
    book2.pages = 400;

    cout << "Title: " << book2.title << endl;
    cout << "Author: " << book2.author << endl;
    cout << "Pages: " << book2.pages << endl;
    return 0;
}
