//042_Prime.cpp
#include<iostream>
#include<cmath>
using namespace std;
int main(){
 int i,num;

 cout<<"Enter a number: ";
 cin>>num;

 int s=sqrt(num);

bool prime=true;


 if(num<=1)
 prime=false;
 else{

    for(i=2;i<=s;i++)
    {
        if(num%i==0)
        {
            prime=false;
            break;
        }
    }
}

if(prime)
cout<<num<<" is prime"<<endl;
else
cout<<num<<" is not prime"<<endl;

return 0;
}