#include<iostream>
#include<conio.h>
using namespace std;

class A
{
    private :
    int ID = 101;
    string Name = "Nasif";

    public :
        friend class B;
};

class B
{
public :
    void display(A fd)
    {
        cout << fd.ID << endl;
        cout << fd.Name << endl;
    }
};

int main()
{
    A ob1;
    B ob2;
    ob2.display(ob1);

    getch();
}

