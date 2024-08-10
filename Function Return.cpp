#include<iostream>
#include<conio.h>
using namespace std;

int addition(int, int);

int main()
{
    int Result = addition(10, 20);
    cout << "Sum = " << Result << endl;

    getch();
}

int addition(int a, int b)
{
    int sum = a + b;
    return sum;
}

