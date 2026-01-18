#include <iostream>
using namespace std;

int main() {
    int num = 50;
    void *vptr = &num;

    cout << "Value using void pointer: " << *(int*)vptr << endl;

    return 0;
}
