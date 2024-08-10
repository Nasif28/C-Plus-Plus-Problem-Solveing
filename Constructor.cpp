#include<iostream>
#include<conio.h>

using namespace std;

class Student
{
public :
    int id;
    double gpa;

    void show()
    {
        cout << id << "   " << gpa << endl;
    }

    Student(int x, double y)
    {
        id = x;
        gpa = y;
    }
};

int main()
{
    Student Nasif(101,3.09), Zeehan(102,3.54);
    Nasif.show();
    Zeehan.show();

    getch();
}



