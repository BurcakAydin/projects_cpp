#include <iostream>
#include <cmath>

using namespace std;


int main()

{
int secretNum = 7;
int guess;
int guessCount = 0;
int guessLimit = 3;
bool outOfGuesses = false;

while (secretNum != guess && !outOfGuesses)
{
    if(guessCount < guessLimit){
        cout << "Enter the guess: ";
        cin >> guess;
        guessCount++;
    } else {
        outOfGuesses = true;
    }

}
if(outOfGuesses){
    cout << "You lost!";
} else{
    cout << "You won!";
}

return 0;
}







/*  int main()

{
int secretNum = 7;
int guess;

while (secretNum != guess)
{
    cout << "Enter the guess between 0 and 10: ";
    cin >> guess;
    
}
cout << "You win!";

return 0;
}
*/