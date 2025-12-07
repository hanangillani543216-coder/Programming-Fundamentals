#include<iostream>
using namespace std;
int main()
{
	double balance, withdrawl;
	
	cout << "Enter Your Balance: ";
	cin >> balance;
	
	cout << "Enter the Amount to Withdraw: ";
	cin >> withdrawl;
	
	if(withdrawl <= balance)
	{balance = balance - withdrawl;
	
	cout << "Transaction Successful. ";
	
	cout << "Remaining Balance $: "<< balance <<endl;
	}
	else
	{
		cout << "Insufficient Balance";
	}
	return 0;	
	
}
