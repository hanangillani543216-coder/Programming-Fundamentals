#include <iostream>
using namespace std;

int main() {
    int arr[5] = {5, 10, 15, 20, 25};
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    float average = sum / 5.0;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}
