#include<iostream>
using namespace std;
int main()
{
	char signal;
	cout << "Enter the Traffic signal colour (R,Y,G): ";
	cin >> signal;
	
	if (signal == 'R'||signal == 'r')
	cout << "STOP";
	
	if (signal == 'Y'||signal == 'y')
	cout << "Slow Down";
	
	if (signal == 'G'||signal == 'g')
	cout << "GO";
	
	return 0;
}
