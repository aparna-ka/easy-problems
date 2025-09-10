//050_Power_Using_Recursion.cpp
#include<iostream>
using namespace std;

    int power(int x,int n){
        if(n==0){
            return 1;
        }
        else{
            return x * power(x,n-1);
        }
    }

    int main(){

    int base,exp;
    cout<<"enter the base number : \n";
    cin>>base;
    cout<<"enter the exponent value : \n";
    cin>>exp;
    int res = power(base,exp);
    cout<<base<<"^"<<exp<<" = "<<res;
    return 0;
}