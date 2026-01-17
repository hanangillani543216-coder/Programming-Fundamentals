#include <iostream>
using namespace std;

int main() {
    int mainChoice, subChoice, quantity;
    double totalBill = 0.0;

    char moreOrder;

    do {
        cout << "\n--- Main Menu ---\n";
        cout << "1. Breakfast\n";
        cout << "2. Lunch\n";
        cout << "3. Dinner\n";
        cout << "Enter your choice: ";
        cin >> mainChoice;

        switch(mainChoice) {
            case 1: // Breakfast
                cout << "\n--- Breakfast Menu ---\n";
                cout << "1. Anda Paratha (Rs.40)\n";
                cout << "2. Nan Channy (Rs.60)\n";
                cout << "3. Siri Paye (Rs.150)\n";
                cout << "4. Tea (Rs.15)\n";
                cout << "Enter your choice: ";
                cin >> subChoice;
                cout << "Enter quantity: ";
                cin >> quantity;

                if(subChoice == 1) totalBill += 40 * quantity;
                else if(subChoice == 2) totalBill += 60 * quantity;
                else if(subChoice == 3) totalBill += 150 * quantity;
                else if(subChoice == 4) totalBill += 15 * quantity;
                else cout << "Invalid choice!\n";
                break;

            case 2: // Lunch
                cout << "\n--- Lunch Menu ---\n";
                cout << "1. Chicken Karahi (Rs.1050/KG)\n";
                cout << "2. Mutton Karahi (Rs.1800/KG)\n";
                cout << "3. Egg Fried Rice (Rs.450/plate)\n";
                cout << "4. BBQ (Rs.1050/dozen)\n";
                cout << "Enter your choice: ";
                cin >> subChoice;
                cout << "Enter quantity: ";
                cin >> quantity;

                if(subChoice == 1) totalBill += 1050 * quantity;
                else if(subChoice == 2) totalBill += 1800 * quantity;
                else if(subChoice == 3) totalBill += 450 * quantity;
                else if(subChoice == 4) totalBill += 1050 * quantity;
                else cout << "Invalid choice!\n";
                break;

            case 3: // Dinner
                cout << "\n--- Dinner Menu ---\n";
                cout << "1. Chicken Karahi (Rs.1050/KG)\n";
                cout << "2. Mutton Karahi (Rs.1800/KG)\n";
                cout << "3. Egg Fried Rice (Rs.450/plate)\n";
                cout << "4. BBQ (Rs.1050/dozen)\n";
                cout << "5. Saji (Rs.800/KG)\n";
                cout << "Enter your choice: ";
                cin >> subChoice;
                cout << "Enter quantity: ";
                cin >> quantity;

                if(subChoice == 1) totalBill += 1050 * quantity;
                else if(subChoice == 2) totalBill += 1800 * quantity;
                else if(subChoice == 3) totalBill += 450 * quantity;
                else if(subChoice == 4) totalBill += 1050 * quantity;
                else if(subChoice == 5) totalBill += 800 * quantity;
                else cout << "Invalid choice!\n";
                break;

            default:
                cout << "Invalid main menu choice!\n";
        }

        cout << "Do you want to order more? (y/n): ";
        cin >> moreOrder;

    } while(moreOrder == 'y' || moreOrder == 'Y');

    cout << "\nYour total bill is: Rs." << totalBill << endl;
    cout << "Thank you for ordering!\n";

    return 0;
}

