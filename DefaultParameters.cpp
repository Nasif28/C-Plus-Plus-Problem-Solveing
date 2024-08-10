#include<iostream>
#include<conio.h>
using namespace std;

void display(int a=10, int b=35)
{
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout<< endl;
}

int main()
{

    display(12);
    display(15,25);
    display();

    getch();
}
