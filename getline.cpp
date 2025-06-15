//a string with white spaces 
#include <iostream>
using namespace std;

int main(){
    
    string name; 

    cout << "What's your name? : "; 
    getline( cin >> ws, name);    //ws is used to eliminate any white space.   

    cout << "your name is "<< name;  

    return 0;

}