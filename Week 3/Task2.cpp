#include<iostream>
using namespace std;
int main()
{
    float item1= 12.95, item2= 24.95, item3= 6.95, item4= 14.95, item5= 3.95;
    float subtotal = item1 + item2 + item3 + item4 + item5;
    float salestax = subtotal * 0.06;
    float total = subtotal + salestax;
    
    cout << "Price of Item 1: $" << item1 << endl;
    cout << "Price of Item 2: $" << item2 << endl;
    cout << "Price of Item 3: $" << item3 << endl;
    cout << "Price of Item 4: $" << item4 << endl;
    cout << "Price of Item 5: $" << item5 << endl;
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Sales Tax: $" << salestax << endl;
    cout << "Total: $" << total << endl;
   
    return 0; 
}
