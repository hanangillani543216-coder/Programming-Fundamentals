#include<iostream>
using namespace std;
int main(){
	int shape;
	cout << "Enter a number for Shape: " << endl;
	cout << "1. for Circle" << endl;
	cout << "2. for Rectangle" << endl;
	cout << "3. for Triangle" << endl;
	cin >> shape;
	
	switch (shape) {
        case 1: {
            float radius, area;
            cout << "Enter radius: ";
            cin >> radius;
            area = 3.14 * radius * radius;
            cout << "Area of Circle = " << area << endl;
            break;
        }
        case 2: {
            float length, width, area;
            cout << "Enter length and width: ";
            cin >> length >> width;
            area = length * width;
            cout << "Area of Rectangle = " << area << endl;
            break;
        }
        case 3: {
            float base, height, area;
            cout << "Enter base and height: ";
            cin >> base >> height;
            area = 0.5 * base * height;
            cout << "Area of Triangle = " << area << endl;
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}

