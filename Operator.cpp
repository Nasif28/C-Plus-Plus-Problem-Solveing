#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    int num1, num2, x, y, s;

    cout<<"Enter two numbers : ";
    cin >> num1;
    cin >> num2;
    cout<< endl;

    cout<< showpoint;
    cout<< fixed;
    cout<< setprecision(2);
    int sum = num1 + num2;
    cout<< "The sum is : " <<sum;
    cout<< endl;

    float sub = num1 - num2;
    cout<< "The subtraction is : " <<sub;
    cout<< endl;

     float mul = num1 - num2;
    cout<<setw(25) <<"The multiplication is : " <<mul;
    cout<< endl;

    cout<< noshowpoint;
    float dev = num1 % num2;
    cout<<setw(25) << "The devision is : " <<dev;
    cout<< endl;

    double rem = num1 / num2;
    cout<<setw(25) << "The reminder is : " <<rem;
    cout<< endl;


    s = (x=5, y=10, s=x+y);
    cout<<s;

}
