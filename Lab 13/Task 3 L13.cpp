#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    cout << "Array elements:\n";
    for(int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " ";
    }

    return 0;
}
