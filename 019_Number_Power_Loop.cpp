#include<iostream>
using namespace std;
int main(){
    int base,exp,i;
    int result=1;
    cout<<"enter the base : \n";
    cin>>base;
    cout<<"enter the exponent : \n";
    cin>>exp;
    for(i=1;i<=exp;i++){

        result= result*base;
        
    }
    cout<<base<<"^"<<exp<<" = "<<result;
    return 0;

}