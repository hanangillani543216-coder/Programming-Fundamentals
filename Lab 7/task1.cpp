#include<iostream>
using namespace std;
int main()
{
	int total_marks = 300;int subject_marks = 100; int total_obtained_marks;
	int subject1 ,subject2 ,subject3;
	float p1,p2,p3;
	char grade;
	
	cout << " Enter the Numbers of First subject :";
	cin >> subject1;
	p1 = (subject1 * 100.0)/subject_marks;
	cout << "Percentage of First Subject :" << p1 <<" % " << endl;
	if ( p1 >=90 )
	{
		cout << "Grade A" << endl;
	}
	else if ( p1 >= 80 )
	{
		cout << "Grade B" << endl;
	}
	else if ( p1 >= 70 ){
		cout << "Grade C" << endl;
	}else if ( p1 >= 60 ){
		cout << "Grade D" << endl;
	}
	else 
{
		cout << " Grade F " << endl;
	}
	
	
	cout << endl <<" Enter the number of second subject :";
	cin >> subject2;
		p2 = (subject2*100.0)/subject_marks;
	cout << "Percentage of second subject :" << p2 <<" % " << endl;
	if ( p2 >=90 )
	{
		cout << "Grade A" << endl;
	}
	else if ( p2 >= 80 )
	{
		cout << "Grade B" << endl;
	}
	else if ( p2 >= 70 ){
		cout << "Grade C" << endl;
	}else if ( p2 >= 60){
		cout << "Grade D" << endl;
	}
	else 
{
		cout << " Grade F " << endl;
	}
	cout << endl<< " Enter the number of third subject :";
	cin >> subject3;
		p3 = (subject3* 100.0)/subject_marks;
	cout << "Percentage of third subject :" << p3 <<" % " << endl;
	if ( p3 >=90 )
	{
		cout << "Grade A" << endl;
	}
	else if ( p3 >= 80 )
	{
		cout << "Grade B" << endl;
	}
	else if ( p3 >= 70){
		cout << "Grade C" << endl;
	}else if ( p3 >= 60 ){
		cout << "Grade D" << endl;
	}
	else 
{
		cout << " Grade F " << endl;
	}
	
	// Total Obtained Marks
	total_obtained_marks = subject1 + subject2 + subject3;
	cout <<endl << " Total Marks Obtained = " << total_obtained_marks << endl;
	
	float p; 
	p = (total_obtained_marks*100.0)/total_marks;
	cout << " percentage :"<< p << "%" << endl;
	if ( p >=90 )
	{
		cout << "Grade A" << endl;
	}
	else if ( p >= 80 )
	{
		cout << "Grade B" << endl;
	}
	else if ( p >= 70){
		cout << "Grade C" << endl;
	}else if ( p >= 60 ){
		cout << "Grade D" << endl;
	}
	else 
{
		cout << " Grade F " << endl;
	}
	if ( p1 >= 90 && p2 >=90 && p3>=90 && total_obtained_marks >= 270 ){
		cout << endl<< " Eligible for Merit Scholarship ";
	}
	else if ( p1 >= 80 && p2 >= 80 && p3 >= 80 && total_obtained_marks >= 240 ){
		cout << endl <<" Student is eligible for regular scholarship ";
	}
	else
	{ cout << endl << " Not Eligible for the Scholarship ";
	}
	
	return 0;
	
}
