#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{ 
    string phrase = "Game Design";
    //phrase[0] = 'P'; // change 0. index with P
 
   //cout << phrase.length(); // Length function
   //cout << phrase[2]; // index position 0, 1, 2 so 2 is m
   //cout << phrase; 
   //ccout << phrase.find("Design", 0); // output is 5, because it starts at 5. index
    string phrasesub;
    phrasesub = phrase.substr(5, 2);
    cout << phrasesub;

    return 0; 
}  