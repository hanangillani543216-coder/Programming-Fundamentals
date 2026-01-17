#include<iostream>
using namespace std;
int main()
{
	string username1,password1;
	cout << "Enter the Username: " << endl;
	cin >> username1;
	
	cout << "Enter the Password: " << endl;
	cin >> password1;
	
	string username2= "admin";
	string password2=  "12345";
	
	if ( username1 == username2 && password1 == password2 ) 
	{ 
	  cout <<"Access Granted" << endl;
     }
	 else if ( username1 == username2 && password1 != password2)
	 { cout << "Wrong Password" << endl;
      }
	else {
	
	cout << "User not found" << endl;
}
	return 0;
	}
 
