#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    double x = 3.3;
    double y = 2;
    double z;
    double f;
    double p; //raising power
    double s; //square root 
    double a; //absolute value
    double r; // rounding a num
    double c; //rounding up a num;

    f = min(x, y); // max and min are included in iostream
    z = max(x, y); 
    p = pow(4,2);
    s = sqrt(9);
    a = abs(-3); 
    r = round(x);
    c = ceil(x); // to round down we use the function floor(x)
    cout << "The max is: "<< z << "\nThe min is: " << f ; 
    cout << "\nThe power of 4 to 2 is: " << p; 
    cout << "\nThe square root of 9 is: " << s; 
    cout << "\nThe absolute value of -3 is: " << a; 
    cout << "\nx rounded is: " << r; 
    cout << "\nx rounded up is: " << c; 

    return 0;

}