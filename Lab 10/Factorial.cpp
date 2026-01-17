# include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter a number: ";
    cin>> num;
    int factorial = 1;
    
    if (num<0){
    	cout << "Factorial of negative numbers is not defined." << endl;
	}
	
	else{
		for(int i=1; i<=num ; i++){
			factorial *= i;
		}
		cout << "Factorial of " << num << " -= " << factorial<< endl ;
	}
	return 0;
}
