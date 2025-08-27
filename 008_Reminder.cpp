#include<iostream>
using namespace std;
int main(){

    int num1,num2,r;

    cout<<"enter first number :\n";
    cin>>num1;

    cout<<"enter second number :\n";
    cin>>num2;

    if(num2!=0)
    {
        r=num1%num2;
        cout<<"reminder is "<<r;
    }
    
    else
    {
         cout<<"can't divide by zero ";
    }

    return 0;
    
}