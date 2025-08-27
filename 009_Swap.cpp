#include<iostream>
using namespace std;
int main(){
    int num1,num2,temp;
    cout<<"first number:";
    cin>>num1;
    cout<<"second number:";
    cin>>num2;
    temp=num1;
    num1=num2;
    num2=temp;
    cout<<"\nAfter Swapping\n";
    cout<<"\nFirst number:"<<num1<<"\n";
    cout<<"Second number:"<<num2<<"\n";
}