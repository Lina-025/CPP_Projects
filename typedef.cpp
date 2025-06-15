#include <iostream>
#include <vector>
using namespace std; 

//typedef vector<pair<string, int>> pairlist_t;
//typedef string text_t;
//typedef int number_t;
using text_t = string;
using number_t = int; //keyword instead of typedef

int main(){
    text_t name = "Lina";
    number_t age = 22;
    cout << name << '\t' << age;
    return 0;
}