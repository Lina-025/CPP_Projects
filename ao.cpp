#include <iostream>
using namespace std;

int main(){

    int students = 20;
    int kittens = 100;
    students = students+1;
    //or students++; 
    // or students+=1; 
    // for other operators we just replace + with - or * or / or %.

    kittens = kittens % 6;
    cout << students << '\n'<< kittens; 
    //four kittens left 
    return 0;
}