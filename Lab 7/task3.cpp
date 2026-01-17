#include<iostream>
#include<string>
using namespace std;
int main()
{
	string user , pass , role;
	cout << "Enter user name:"; cin >> user;
	cout << "Enter password:";  cin >> pass;
	if ( user == "admin" && pass == "password123" )
	{
	cout << " Authentication Successful! \n \n " << endl ;
	cout << " Enter your role ( Admin / Guest / User / Manager)";
	cin >> role;
	if ( role == "admin" || role == "ADMIN" || role == "Admin" ){
		cout << " Full Access ";
	}
	if ( role == "Guest" || role == "GUEST" || role == "guest" ){
		cout << " Limited Access ";
	}
	if ( role == "User" || role == "USER" || role == "user" || role == "manager" || role == "MANAGER" || role == "Manager" )
	{
		cout << "NO Access ";
	}
	}else {
		cout << "Authentication Failed. Access Denied.";
	}
	return 0;
}
	
