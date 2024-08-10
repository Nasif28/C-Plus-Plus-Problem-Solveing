#include<iostream>
#include<conio.h>

using namespace std;

class Person
{
public :
    void display()
    {
        cout << "I am a Person" << endl;
    }
};

class Teacher : public Person
{
public :
    void display()
    {
        cout << "I am a Teacher" << endl;
    }
};

class Student : public Teacher
{
public :
    void display()
    {
        cout << "I am a Student" << endl;
    }
};

int main()
{
    Person p;
    p.display();

    Teacher T;
    T.display();

    Student S;
    S.display();

    getch();
}
