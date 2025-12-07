#include <iostream>
using namespace std;

int main() 
{
    int a, b, c;
    
	cout << "Enter three numbers: " << endl;
	cin >> a >> b>> c;
	
	int largest;
	if( a>b && a>c )
	{
		largest=a;
	}
	if( b>a && b>c )
	{
		largest=b;
	}
	if( c>a && c>b )
	{
		largest=c;
	}
	cout << "Largest: " << largest << endl;
	
	return 0;
  }
