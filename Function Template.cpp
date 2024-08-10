#include<iostream>
#include<conio.h>

using namespace std;

template<class temp>

temp add(temp a, temp b)
{
    return a+b;
}

template<class temp1, class temp2>

temp1 add1(temp1 a, temp2 b)
{
    return a+b;
}


int main()
{
    cout << add(10,20) << endl;
    cout << add(10.2,20.7) << endl;

     cout << add1(10.3,20) << endl;
    cout << add1(10,20.7) << endl;

    getch();
}
