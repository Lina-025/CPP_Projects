#include <iostream>
#include <iomanip>
using namespace std;

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){
    double balance =0.00;
    int choice = 0;
    do {
        cout << "Welcome to the Banking Program!" << endl;
    cout << "Please select an option:" << endl;
    cout << "1. Show Balance" << endl;
    cout << "2. Deposit Money" << endl; 
    cout << "3. Withdraw Money" << endl;
    cout << "4. Exit" << endl;
    cin >> choice; 

    cin.clear(); 
    fflush(stdin); 

    switch(choice){
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance = balance + deposit();
            showBalance(balance);
            break;
        case 3: balance = balance - withdraw(balance);
            showBalance(balance);
            break;
        case 4:
            cout << "Thank you for using the Banking Program!";
            break;
        default: cout << "Invalid choice. Please try again." << endl;
            break;
        }
    }while(choice != 4);
    
    return 0;
}

void showBalance(double balance){
    cout << "your balance is: $" << balance << endl;
    }
double deposit(){
    double amount = 0.0;
    cout << "Enter the amount to deposit: $";
    cin >> amount;
    if (amount >0){
    return amount;}
    else {
        cout << "Invalid deposit amount. Please enter a positive value." << endl;
        return 0.0;
    }
}
double withdraw(double balance){
    double amount = 0.0;
    cout << "Enter the amount to withdraw: $";
    cin >> amount;

    if (amount > balance) {
        cout << "Insufficient funds. You cannot withdraw more than your current balance." << endl;
        return 0.0;
    } else if (amount <= 0) {
        cout << "Invalid withdrawal amount. Please enter a positive value." << endl;
        return 0.0;
    } 
    return amount; 
}