#include<iostream>
using namespace std;
int main()
{
    int i,num,sum=0,reminder;
    cout<<"Enter the Digits : \n";
    cin>>num;

    for(i=num;i!=0;i=i/10)
    {
       reminder=i%10;
       sum+=reminder; 
    }
    cout<<"sum of digits :"<<sum<<" ";
    return 0;
}