#include <iostream>
using namespace std;

int main(){
    
    int age;
    cout << "Enter your age:";  
    cin >> age;

    if (age >= 100) {
        cout << "u r too old to access this site!";
    }

    else if (age >= 18) {
       
        cout << "Welcome to the site!";
    } 
    else if (age <= 0){
       cout << "u r not born yet!";

    } 
    else {
       cout << "u r not old enough to access this site!";

    } 

    return 0;
}