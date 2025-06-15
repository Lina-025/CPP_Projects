#include <iostream>
using namespace std;

int main(){

    double temp;
    char unit;

    cout << "Tempereture converter\n";
    cout << "F = Fahrenheit\nC= Celcius\n";
    cout << "What unit would you like to convert to?: ";
    cin >> unit; 

    if(unit == 'F' || unit == 'f'){
         cout << "enter the temp in celcius: "; 
         cin >> temp;

         temp = (1.8 * temp) + 32.0;
         cout << "the temp is: " << temp << "F\n";
    }
    else if (unit == 'C' || unit =='c'){
        cout << "enter the temp in fahrenheit: "; 
        cin >> temp;

         temp = (temp - 32.0) /1.8;
         cout << "the temp is: " << temp << "C\n";
    }
    else {
        cout <<"please enter only C or F";
    }

    return 0;
}