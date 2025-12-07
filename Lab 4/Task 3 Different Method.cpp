#include<iostream>
using namespace std;
int main()
{
int balance;
bool loyal;

 cout << "Enter Your Account Balance: " ;
 cin >> balance;
 
 cout << "Account type:";
 balance < 100 ? cout << "Low Balance Account":
 (balance >= 100 && balance <= 500 ? cout << " Standard Account" : cout << "Premium Account");
 
 cout << " \nEnter 1 for loyal and 0 for not loyal: ";
 	cin >> loyal;
 	balance>200 && loyal == 1 ? cout << " Eligible for Special Offer" : cout << " Not Eligible";

return 0;
}
