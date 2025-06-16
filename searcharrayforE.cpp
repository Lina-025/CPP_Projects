#include <iostream>
using namespace std;

int searcharray(int array[], int size, int element);
int main() {
    int numbers[] = {10, 20, 30, 40, 50};

    int size = sizeof(numbers) / sizeof(numbers[0]);
    int index;
    int myNum; 

    cout << "Enter a number to search for: ";
    cin >> myNum;

    index = searcharray(numbers, size,myNum);

        if (index != -1) {
            cout << myNum << " is at index " << index;
        }else {
            cout << myNum << " is not in the array";
        }
    return 0;
}
int searcharray(int array[], int size, int element){

    for(int i = 0; i < size; i++){
        if (array[i] == element){
            return i;
        } 
    }
    return -1;
}