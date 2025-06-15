#include <iostream>
#include <ctime>
using namespace std;

int main(){

    int num; 
    int guess;
    int tries = 0;
    srand(time(NULL));
    num = (rand() % 3) +1;

    cout << "number guessing game\n";

    do{
        cout << "guess the number from 1 to 3: ";
        cin >> guess;
        tries++; 

        if (num != guess){
            cout << "try again!\n";
        } else { 
            cout << "you win! # of tries: "<< tries;
        }
        
    } while ( num != guess); 
    
    return 0;
}