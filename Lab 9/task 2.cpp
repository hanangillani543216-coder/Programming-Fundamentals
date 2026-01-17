#include <iostream>
using namespace std;

int main() {
    int num,limit;
    int i = 1;

    cout << "Enter a number: ";
    cin >> num;
    cout<<"Enter Limit : ";
    cin>>limit;

    while (i <=limit) {
        cout << num << " x " << i << " = " << num * i << endl;
        i++;  
    }

    return 0;
}

