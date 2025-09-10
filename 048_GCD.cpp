#include<iostream>
using namespace std;
int main(){
    int a,b,r;
    cout<<"Enter 2 numbers : \n";
    cin>>a>>b;
    while(b!=0){
        r=a%b;
        a=b;
        b=r;
        
    }
    cout<<"GCD = "<<a;

    return 0;
}