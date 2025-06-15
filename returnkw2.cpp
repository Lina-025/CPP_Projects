#include <iostream>
using namespace std;

string fullname(string string1, string string2);
int main(){
    
    string name = "lina";  
    string surname = "boukrouh";
    string full_name = fullname(name, surname);
    

    cout << "Hello " << full_name;

}
string fullname(string string1, string string2){
    return string1 + " " + string2; 
}
