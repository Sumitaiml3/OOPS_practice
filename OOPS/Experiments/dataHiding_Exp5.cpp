/*write a class for proper data hiding and member functions for deposit and withdraw and show balance operations in C++.*/
#include <iostream>
using namespace std;
class BankAccount {
private:
    double balance; 
public:
    void setamount() {
        balance = 0.0; 
    }
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: " << amount << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient funds." << endl;
        }
    }
    void showBalance() const {
        cout << "Current balance: " << balance << endl;
    }
};
int main() {
    BankAccount account;
    account.deposit(1000);
    account.showBalance();
    account.withdraw(500);
    account.showBalance();
    account.withdraw(600);
    account.showBalance();
    return 0;
}