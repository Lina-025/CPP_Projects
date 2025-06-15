#include <iostream>
using namespace std;

namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}
int main(){
        cout << first::x;

    return 0;
}