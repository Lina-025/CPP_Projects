#include <iostream>
using namespace std;

int main(){
    int num; 
    do {
        cout << "Enter a positive number: ";
        cin >> num;
    } while (num < 0);
    
    cout << "the number is: "<< num; 
}