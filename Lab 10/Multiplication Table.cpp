# include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter a number: " << endl;
	cin >> num;
	for(int i=1; i<=10 ; i++ )
	{int table = num * i ;
	cout << num << "*" << i << "=" << table << endl;
	}
	return 0 ;
}
