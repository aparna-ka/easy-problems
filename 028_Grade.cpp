#include<iostream>
using namespace std;
int main(){
    float mark;
    cout<<"Enter your marks :";
    cin>>mark;
    if(mark <=0 || mark >100)
    cout<<"Invalid Marks";
    else if(mark >= 92)
    cout<<"A+";
    else if(mark >= 85)
    cout<<"A";
    else if(mark>=70)
    cout<<"B+";
    else if(mark>=65)
    cout<<"B";
    else if(mark>=50)
    cout<<"C+";
    else if(mark>=45)
    cout<<"C";
    else if(mark>=40)
    cout<<"D+";
    else if(mark>=35)
    cout<<"D";
    else
    cout<<"FAIL !";
    return 0;

}