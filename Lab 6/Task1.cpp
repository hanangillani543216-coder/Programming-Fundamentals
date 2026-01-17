#include<iostream>
using namespace std;
int main() 
{
	int num;
	cout << "Enter a number: "  << endl;
	cin >> num;
	
	if( num>0) {
		cout << "The Number is " << num << " positive" << endl; }
		
	else if (num < 0) {
		cout << "The Number is " << num << " Negative" << endl; }
		
	else
	{ cout << "The Number is 0 " << endl;
	}
	return 0;
	
}
