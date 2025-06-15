#include <iostream>
#include <ctime>
using namespace std;

int main(){

    srand(time(NULL));

    int num1 = (rand() % 5) +1;
    
    switch(num1) {
        case 1: cout << "you win a chocolate bar!\n";
        break;
        case 2:cout << "you win a jacket!\n";
        break;
        case 3:cout << "you win a free dinner!\n";
        break;
        case 4:cout << "you win a gift card!\n";
        break;
        case 5:cout << "you win opera tickets!!\n";
        break;
    }
    
    


    return 0;
}