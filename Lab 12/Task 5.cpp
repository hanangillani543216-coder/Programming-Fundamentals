#include <iostream>
using namespace std;

float add(float a, float b) { return a + b;}
float subtract(float a, float b) { return a - b;}
float multiply(float a, float b) { return a * b;}
float divide(float a, float b) { return b!= 0? a / b: 0;}

int main() {
    int choice;
    float num1, num2;

    do {
        cout << "\nCalculator Menu:\n";
        cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n";
        cout << "Choose an option: ";
        cin>> choice;

        if (choice>= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin>> num1>> num2;
}

        switch (choice) {
            case 1: cout << "Result: " << add(num1, num2) << endl; break;
            case 2: cout << "Result: " << subtract(num1, num2) << endl; break;
            case 3: cout << "Result: " << multiply(num1, num2) << endl; break;
            case 4:
                if (num2!= 0)
                    cout << "Result: " << divide(num1, num2) << endl;
                else
                    cout << "Error: Division by zero!" << endl;
                break;
            case 5: cout << "Exiting calculator." << endl; break;
            default: cout << "Invalid choice!" << endl;
}
} while (choice!= 5);

    return 0;
}
