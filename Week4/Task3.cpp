#include<iostream>
using namespace std;
int main()
{
	double balance;
	int    loyal; 
	
	cout << "Enter account Balance: ";
	cin >> balance;
	

	cout << "Account Type: " << (balance < 100 ? "Low Balance Account": (balance >=100 && balance <=500 ? "Standard Account" : "Premium Account")) << endl;
	
	cout << "Are you  loyal customer?(1 for Yes,0 for No): ";
	cin >> loyal;
	
	cout << "Special Offer:" << ((balance > 200 && loyal == 1) ? "Eligible for Special Ofer" : "Not Eligible for Special Offer");
	return 0;
	}
