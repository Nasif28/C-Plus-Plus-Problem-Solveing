#include<iostream>
#include<conio.h>
using namespace std;

void addition(int, int);

int main()
{
    int a, b;

    cout << "Enter two Number = " <<endl;
    cin >> a >> b;
    addition(a, b);

    getch();
}

void addition(int a, int b)
{
    int sum = a + b;
    cout <<"Sum = " <<sum <<endl;
}
