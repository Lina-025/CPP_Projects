#include <iostream>
using namespace std;

int searcharray(string array[], int size, string element);
int main() {
    string foods[] = {"shawarma", "pizza", "burger"};

    int size = sizeof(foods) / sizeof(foods[0]);
    int index;
    string myfood; 

    cout << "Enter a food to search for: ";
    getline(cin, myfood);

    index = searcharray(foods, size,myfood);

        if (index != -1) {
            cout << myfood << " is at index " << index;
        }else {
            cout << myfood << " is not in the array";
        }
    return 0;
}
int searcharray(string array[], int size, string element){

    for(int i = 0; i < size; i++){
        if (array[i] == element){
            return i;
        } 
    }
    return -1;
}