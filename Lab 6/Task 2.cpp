#include<iostream>
using namespace std;
int main()
{
	int temp;
	
	cout  << "Enter the temperature in Celsius: ";
	cin >> temp;
	
	if (temp >= 40) 
	{
		cout << "Stay indoors because it is extremely hot and could be dangerous to health." << endl;
	}
	else if (temp >= 30 && temp <= 39)
	{
		
		cout << "Drink plenty of water to stay hydrated." << endl;
	}
	else if (temp >= 20 && temp <= 29) {
		cout << "The weather is pleasent and suitable for outdoor activities." << endl;
	}
	else {
		cout << "Wear warm clothes to stay comfortable in the cooler weather. " << endl;
	}
	return 0;
}
