#include<iostream>
#include<conio.h>

using namespace std;

int x = 20;           //Global Variable

int main()
{
    int x = 15;      //Local Variable
    cout << :: x;    //Scope Resolution (::)

    getch();
}

