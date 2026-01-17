#include <iostream>
using namespace std;

int main() {
    int choice;
    double balance = 1000.0;
    double amount;

    while (true) {
        cout << "Simple Banking System\n";
        cout<<endl;
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter amount to deposit: ";
            cin >> amount;

            if (amount > 0) {
                balance = balance + amount;
                cout << "Amount deposited successfully.\n";
            } else {
                cout << "Invalid deposit amount.\n";
            }

        } else if (choice == 2) {
            cout << "Enter amount to withdraw: ";
            cin >> amount;

            if (amount > 0 && amount <= balance) {
                balance = balance - amount;
                cout << "Please collect your money.\n";
            } else if (amount > balance) {
                cout << "Insufficient balance!\n";
            } else {
                cout << "Invalid withdrawal amount.\n";
            }

        } else if (choice == 3) {
            cout << "Current Balance: $" << balance << endl;

        } else if (choice == 4) {
            cout << "Thank you for using the banking system.\n";
            break;   

        } else {
            cout << "Invalid choice! Please select again.\n";
        }
    }

    return 0;
}

