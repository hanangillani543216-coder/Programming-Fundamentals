#include <iostream>
using namespace std;

int main() {
    int choice;
    float amount, convertedAmount;

    cout << "Currency Converter\n";
    cout << "1. USD to PKR\n";
    cout << "2. USD to INR\n";
    cout << "3. USD to Euro\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter amount in USD: ";
    cin >> amount;

    switch (choice) {
        case 1:
            convertedAmount = amount * 280;   // USD to PKR
            cout << "Amount in PKR = " << convertedAmount << endl;
            break;

        case 2:
            convertedAmount = amount * 83;    // USD to INR
            cout << "Amount in INR = " << convertedAmount << endl;
            break;

        case 3:
            convertedAmount = amount * 0.92;  // USD to Euro
            cout << "Amount in Euro = " << convertedAmount << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
