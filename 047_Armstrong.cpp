//047_Armstrong.cpp
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num,orginalnum,rmndr;
    int digit=0;
    int res=0;

    cout<<"Enter a number : ";
    cin>>num;

    orginalnum=num;

    while(num!=0){
        num=num/10;
        digit++;
    }

    num=orginalnum;
    

    while(num!=0){
        rmndr=num%10;
        res=res+(int)round(pow(rmndr,digit));
        num=num/10;
    }

    if (res==orginalnum)
        cout<<orginalnum<<" is armstrong"<<endl;
    else
        cout<<orginalnum<<" is not  armstrong"<<endl;
    return 0;
}