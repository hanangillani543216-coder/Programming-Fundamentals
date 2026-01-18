#include <iostream>
#include <iomanip>
using namespace std;

// Function to calculate discount based on total amount
double applyDiscount(double total) {
    if (total < 100)
        return total;             // No discount
    else if (total >= 100 && total <= 500)
        return total * 0.9;      // 10% discount
    else
        return total * 0.8;      // 20% discount
}

int main() {
    int categoryChoice, itemChoice, quantity;
    double price = 0, total;

    cout << fixed << setprecision(2);

    cout << "Welcome to the Shopping System!\n\n";
    cout << "Select a category:\n";
    cout << "1. Electronics\n";
    cout << "2. Clothing\n";
    cout << "3. Groceries\n";
    cout << "Enter your choice: ";
    cin >> categoryChoice;

    switch (categoryChoice) {
        case 1: // Electronics
            cout << "\nElectronics Items:\n";
            cout << "1. Laptop - $1000\n";
            cout << "2. Smartphone - $700\n";
            cout << "3. Headphones - $150\n";
            cout << "Select an item: ";
            cin >> itemChoice;
            switch (itemChoice) {
                case 1: price = 1000; break;
                case 2: price = 700; break;
                case 3: price = 150; break;
                default: cout << "Invalid item choice!\n"; return 0;
            }
            break;

        case 2: // Clothing
            cout << "\nClothing Items:\n";
            cout << "1. Jacket - $120\n";
            cout << "2. T-shirt - $40\n";
            cout << "3. Jeans - $60\n";
            cout << "Select an item: ";
            cin >> itemChoice;
            switch (itemChoice) {
                case 1: price = 120; break;
                case 2: price = 40; break;
                case 3: price = 60; break;
                default: cout << "Invalid item choice!\n"; return 0;
            }
            break;

        case 3: // Groceries
            cout << "\nGrocery Items:\n";
            cout << "1. Milk (1 Liter) - $2\n";
            cout << "2. Bread (1 Loaf) - $3\n";
            cout << "3. Eggs (1 Dozen) - $5\n";
            cout << "Select an item: ";
            cin >> itemChoice;
            switch (itemChoice) {
                case 1: price = 2; break;
                case 2: price = 3; break;
                case 3: price = 5; break;
                default: cout << "Invalid item choice!\n"; return 0;
            }
            break;

        default:
            cout << "Invalid category choice!\n";
            return 0;
    }

    cout << "Enter quantity: ";
    cin >> quantity;

    total = price * quantity;
    double finalAmount = applyDiscount(total);

    // Generate invoice
    cout << "\n====== Invoice ======\n";
    cout << "Item Price: $" << price << "\n";
    cout << "Quantity: " << quantity << "\n";
    cout << "Subtotal: $" << total << "\n";
    if (finalAmount != total) {
        cout << "Discount Applied: $" << (total - finalAmount) << "\n";
    } else {
        cout << "No Discount Applied\n";
    }
    cout << "Total Amount to Pay: $" << finalAmount << "\n";
    cout << "====================\n";

    return 0;
}
