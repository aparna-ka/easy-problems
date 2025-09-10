#include<iostream>
using namespace std;
int main(){
    int a,b,r,l;
    cout<<"Enter 2 numbers: \n";
    cin>>a>>b;
    int OrgA=a;
    int OrgB=b;
    while(b!=0){
        r=a%b;
        a=b;
        b=r;
    }

    int gcd=a;

    cout<<"GCD of "<<OrgA<<" & "<<OrgB<<" is "<<gcd<<endl;
    l=(OrgA*OrgB)/gcd;
    cout<<"LCM is "<<l;

    return 0;
}