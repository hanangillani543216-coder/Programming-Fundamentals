#include<iostream>
using namespace std;
int main()
{
int age;
cout << "Enter age: ";
cin >> age;
(age < 13) ? cout << "Age " << age << " falls under the category Child." : (age >= 13 && age <=19) ? cout << "Age " << age << " falls under the category Teeenager." : cout << "Age " << age << " falls under the category Adult.";
return 0;
}
