#include<iostream>
using namespace std;
int main(){
    float a1,a2,a3;
    cout<<" Enter three angles of triangle :"<<endl;
    cin>>a1>>a2>>a3;
    cout<<endl;
    cout<<"A triangle is valid if the angles given are not less than 0 and if the sum of angles is 180"<<endl;

    if((a1>0 && a2>0 && a3>0) && (a1+a2+a3==180)){
        cout<<"\n"<<"Triangle is valid";
    }
    else{
        cout<<"\n"<<"Not Valid";
    }

    return 0;
}