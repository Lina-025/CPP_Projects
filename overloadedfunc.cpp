#include <iostream>
using namespace std;

void bakepizza();
void bakepizza(int size);

int main(){

    bakepizza(12); 

    return 0;
}

void bakepizza(){
    cout << "your pizza is here\n";
}
void bakepizza(int size){
    cout << "your " << size << " inch pizza is here\n";
}