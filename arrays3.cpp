#include <iostream>
using namespace std;

double getTotal(double prices[], int size);

int main(){
    double prices [] = {10, 9, 5, 4};
    int size = sizeof(prices) / sizeof (prices[0]);
    double total = getTotal(prices, size);
    
    cout << "$" << total;
} 

double getTotal(double prices[], int size) {
    double total = 0; 

    for (int i = 0; i < size; i++){
        total = total + prices[i];
    }
return total;    
}