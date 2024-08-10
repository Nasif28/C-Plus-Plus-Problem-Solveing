#include<iostream>
#include<conio.h>

using namespace std;

class student
{
public :
    int id;
    double gpa;

    void show()
    {
        cout << id << "   " << gpa << endl;
    }

    void value(int x, double y)
    {
        id = x;
        gpa = y;
    }
};

int main()
{
    student Nasif, Zeehan;

    Nasif.value(101,3.09);
    Nasif.show();

    Zeehan.value(102,3.54);
    Zeehan.show();

    getch();
}


