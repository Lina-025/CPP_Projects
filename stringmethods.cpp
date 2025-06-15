#include <iostream>
using namespace std;

int main(){
        
    string name;
    cout <<"enter your name: ";
    getline (cin, name);

    /*if(name.length() > 15) {
        cout << "your name can't be over 12 characters";
    }
    else {
        cout << "Welcome " << name;
    } */
    /*if(name.empty()){
        cout<< "you did not enter your name";
    }*/

   //name.clear();
        //cout << "Hello" << name;

    //name.append("@gmail.com");
    //cout << "your username is now: " << name;
    
    //cout << name.at(2);// tells which string index it is
    
    //name.insert(0, "#");// inserts # at the first index
    //cout << name;

    //cout << name.find(' ');// find white spaces

    name.erase(0, 3);// deletes 3 indexes 
    cout << name;
    return 0;
}