#include<iostream>
using namespace std;
int main()
{
	double salary;
	int n;
	
	cout<<"Enter salary: $";
	cin>>salary;
	
	cout<<"Enter years of work experience: ";
	cin>>n;
	
	if((salary > 25000) || (n>5 && salary >= 20000))
	{
	cout << "Person is eligible for a loan." << endl;
	}
	else
	{
		cout << "Person is not eligible for a loan." << endl;
	}
	return 0;
}
