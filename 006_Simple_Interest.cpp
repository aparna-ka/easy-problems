#include<iostream>
using namespace std;
int main()
{
    float Principal,InrstRate,Time,SI;

    cout<<"Enter amount of money :";
    cin>>Principal;
    cout<<"Enter Rate Of Interest :";
    cin>>InrstRate;
    cout<<"Enter Time in Years :";
    cin>>Time;

    SI=(Principal*InrstRate*Time)/100;

    cout<<"Simple Interest = "<<SI;

    return 0;
}