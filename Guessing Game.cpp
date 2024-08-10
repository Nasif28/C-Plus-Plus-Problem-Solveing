#include<iostream>
#include<conio.h>
#include<cstdlib>

using namespace std;

int main()
{
   while(1)
   {
        int guessN, randomN;
    cout << "Enter any Number between 1 to 5 : " << endl;
    cin >> guessN;

    randomN = 1 + rand() % 5;

    if(randomN==guessN)
        cout<< "Congretulation, You have Won" <<endl;
    else
        cout<< "Wrong. Try again" <<endl;


    getch();
   }
}
