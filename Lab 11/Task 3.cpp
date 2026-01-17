#include <iostream>
using namespace std;

void checkEvenOdd(int num) {
    if (num % 2 == 0)
        cout << num << " is Even" << endl;
    else
        cout << num << " is Odd" << endl;
}

int main() {
    checkEvenOdd(33);
    checkEvenOdd(14);
    return 0;
}
