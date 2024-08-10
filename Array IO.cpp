#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int A[10], n, i;

    cout<< "Enter number of character of Array = " <<endl;
cin>> n;

    for(i=0; i<n; i++)
    {
        cout<< "Numbers of Array" <<i <<" = ";
        cin>> A[i];
    }

    for(i=0; i<n; i++)
    {
        cout<<"Numbers of Array" <<i <<" is = " <<A[i] <<endl;
    }




    return 0;
}
