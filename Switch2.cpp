#include <iostream>
using namespace std;

int main(){
    char grade;

    cout << "what letter grade?; ";
    cin >> grade; 

    switch (grade) {
        case 'A': 
        cout << "you did great!";
        break;
        case 'B':
        cout << "you did good!";
        break;
        case 'C':
        cout << "you did OK!";
        break;  
        case 'D':
        cout << "you did not do good!";
        break; 
        case 'f':
        cout << "you failed!";
        break; 

        default: 
        cout << "please enter a letter grade only!";
    }
}