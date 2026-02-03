#include <iostream>
using namespace std;

int main() {
    float balance;
    int loyal; // 1 for loyal, 0 for not loyal

    cout << "Enter account balance: ";
    cin >> balance;

    cout << "Enter loyalty status (1 for loyal, 0 for not loyal): ";
    cin >> loyal;

    // Account Type Determination
    (balance < 100) ? cout << "Account Type: Low Balance Account\n" :
    (balance <= 500) ? cout << "Account Type: Standard Account\n" :
                       cout << "Account Type: Premium Account\n";

    // Special Offer Eligibility
    (balance > 200 && loyal == 1) ?
        cout << "Special Offer: Eligible" :
        cout << "Special Offer: Not Eligible";

    return 0;
}
