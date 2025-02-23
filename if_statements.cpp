#include <iostream>
#include <cmath>

 using namespace std;


int getMax(int num1, int num2){
    int result;

    if(num1 > num2) {

        result = num1;
    } else {
        result = num2;
    }

    return result;

}

 int main()
 {

    cout << getMax(3,5);
 }



/*  int main()
 {
    bool isFemale = true;
    bool isTall = false;
    if(isFemale && isTall){
        cout << "You are a tall female";
    } else if(isFemale && !isTall){
        cout << "You are short female";
    } else if(!isFemale && isTall){
        cout << "You are a tall but not female";
    }
    else {
        cout << "You are not tall and not female";
    }
 }

 */

