#include <iostream>
using namespace std;

int main() {
    int num = 5;
    int *ptr = &num;

    *ptr = 25;

    cout << "Modified value: " << num << endl;

    return 0;
}
