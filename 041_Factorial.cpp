//041_Factorial.cpp
#include<iostream>
using namespace std;
int main(){
    int num,i,fact=1;
    cout<<"Enter a number : \n";
    cin>>num;

    cout<<"---Factorial of "<<num<<"---"<<endl;

    for(i=1;i<=num;i++)
    {
       fact=fact*i;
    }
    cout<<"factorial of "<<num<<" is "<<fact;
    return 0;

}