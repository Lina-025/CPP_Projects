//hello this is a simple calculator using arithmetic operators and switch statement.
#include <iostream>
using namespace std;

int main(){
    
    double x , y;
    char ao; 

    cout << "enter the arethmitic operator you want to use: ";
    cin >> ao; 

    cout << '\n' << "enter two numbers: "; 
    cin >> x >> y;

    switch (ao) {
        case '+':
        cout << x << "+" << y << "=" << x + y;
        break;

        case '-':
        cout << x << "-" << y << "=" << x - y;
        break;

        case '*':
        cout << x << "*" << y << "=" << x * y;
        break;

        case '/':
        cout << x << "/" << y << "=" << x / y;
        break;
        
        case '%':
        cout << x << "%" << y << "=" << (int)x % (int)y;
        break;

        default:
        cout << "Error! this calculator does not support this operator";
        break;
    }

    return 0;

}
    


    
