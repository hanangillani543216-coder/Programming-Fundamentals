#include<iostream>
using namespace std;
int main()
{
	int age;
	cout << " Enter your age :";
	cin >> age;
	if ( age >= 18 )
	{
		int income;
		cout << " Enter yor income $:";
		cin >> income;
		
		if( income >= 30000 )
		{
		cout << " Congratulations! You are Eligible for the loan.";
	}
	else {
		cout << "You meet the age requirements but are not eligible for a loan because your incomeis below $30,000.";
	}
}
	else  {
		cout << " Your are not eligible for the loan because You Age is under 18.";
	}
}
