#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double score1 = 85.5;
	double score2 = 90.75;
	double score3 = 88.25;
	
	double average = (score1 + score2 + score3)/ 3.0;
	
	cout << fixed << setprecision(2);
	cout << "The average of 85.5, 90.75 and 88.25 = " << average << endl;
	
	return 0;
}
