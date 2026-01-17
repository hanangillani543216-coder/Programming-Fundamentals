#include<iostream>
using namespace std;
int main(){
	int n1, n2, x;
	char ch;
	cout << "Enter 1st Number: " << endl;
	cin >> n1;
	cout << "Enter 2nd Number: " << endl;
	cin >> n2;
	
	cout << "Choose an Operator: " << endl;
	cout << "+ for addition" << endl;
	cout << "- for subtraction" << endl;
	cout << "/ for division" << endl;
	cout << "* fot multiplication" << endl;
	cin >> ch;
	
	switch(ch){
		case '+':
			x = n1 + n2;
			cout <<"The Sum is " << x;
			break;
		case '-':
			x = n1 - n2;
			cout <<"The subraction answer is " << x;
			break;
		case '/':
			x = n1 / n2;
			cout <<"The divided answer is " << x;
			break;
		case '*':	
		    x = n1 * n2;
			cout << "The multiplcation answer is " << x;
		    break;
		default:
		    cout << "Wrong Operator" << endl;
			
	}
	return 0;
}

