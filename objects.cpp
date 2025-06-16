#include <iostream>
using namespace std;
class human {
    public: 
    string name;
    int age;
    string occupation;

    void eat(){
        cout << "this human is eating\n";
    }
    void sleep(){
        cout << "this human is sleeping\n";
    }
};
int main() {
    human human1;
    human human2;
    human1.name = "Rick";
    human1.age = 55;
    human1.occupation = "physician";
 
    human2.name = "ace";
    human2.age = 22;
    human2.occupation = "pirate";

    cout << human1.name << endl;
    cout << human1.age << endl;
    cout << human1.occupation << endl; 

    cout << human2.name << endl;
    cout << human2.age << endl;
    cout << human2.occupation << endl;

    human1.eat();
    human1.sleep();
    human2.eat();
    human2.sleep();

}