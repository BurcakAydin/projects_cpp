#include <iostream>
#include <cmath>

using namespace std;

int main()

{
    int numberGrid[3][2] = {
        {3, 5},
        {3, 4},
        {7, 6}
    };
    for (int i = 0; i < 3; i++){
        for(int j= 0; j < 2; j++){
            cout << numberGrid[i][j];
        }
        cout << endl; 
    }
   
    
    return 0;
}

