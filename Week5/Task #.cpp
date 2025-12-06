#include<iostream>
using namespace std;
int main()
{
	cout << "Weekdays" << endl;
int day;
  cout << "Enter a number (1 to 7): " ;
  cin >> day;

switch (day)
{
 case 1:
 cout << "Today is Monday" << endl;
 break;
 case 2:
 cout << "Today is Tuesday" << endl;
 break;
 case 3:
 cout << "Today is Wednesday" << endl;
 break;
 case 4:
 cout << "Today is Thursday" << endl;
 break;
 case 5:
 cout << "today is Friday" << endl;
 break;
 case 6:
 cout << "today is Saturday" << endl;
 break;
 case 7:
 cout << "today is Sunday" << endl;
 break;
 
 break;
 default:
 cout << "error : Number must be from 1 to 7!" << endl;
 }
	return 0;
}
