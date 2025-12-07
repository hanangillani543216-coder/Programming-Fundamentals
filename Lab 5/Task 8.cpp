#include<iostream>
using namespace std;
int main()
{
	int year;
	char grade;
	float Basic_Salary=0, bonus=0, tax=0, Gross_Salary=0, Net_Salary=0;
	cout << "Enter your grade: " << endl;
	cin >> grade;
	
	cout << "Enter your Years of Service: " << endl;
	cin >> year;
	
	if(grade=='A'||grade=='a')
	{
       Basic_Salary=50000;
	}
		if(grade=='B'||grade=='b')
	{
       Basic_Salary=30000;
	}
		if(grade=='C'||grade=='c')
	{
       Basic_Salary=20000;
	}
	
	if(year >= 10)
	{
		bonus = Basic_Salary*0.10;
	}
		if(year < 9 && year > 5)
	{
		bonus = Basic_Salary*0.5;
	}
		if(year < 5)
	{
		bonus = Basic_Salary*0;
	}
	//GROSS SALARY
	Gross_Salary = Basic_Salary + bonus;
	
	
	if (Gross_Salary > 40000)	{
		tax = Gross_Salary * 0.20;
	}
		if (Gross_Salary >= 30000 && Gross_Salary <= 40000)	
	{
		tax = Gross_Salary * 0.10;
		}
		if(Gross_Salary < 30000){
		tax = 0;
	}
	
	
	Net_Salary = Gross_Salary - tax;
	
	
	cout << "Basic Salary: " << Basic_Salary << endl;

	
	cout << "Bonus: " << bonus << endl;
	
    cout << "Gross Salary: " << Gross_Salary << endl;
	
	cout << "Tax Deducted: " << tax << endl;
	
	cout << "Net Salary: "<< Net_Salary << endl;
	
	return 0;
	
}
