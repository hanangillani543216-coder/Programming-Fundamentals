#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    string correctPassword = "12345";

    do {
        cout << "Enter your password: ";
        cin >> password;

        if(password != correctPassword) {
            cout << "Incorrect password! Try again.\n";
        }

    } while(password != correctPassword);

    cout << "Password accepted. Welcome!\n";

    return 0;
}

