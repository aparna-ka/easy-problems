//046_Reverse.cpp
#include<iostream>
using namespace std;
int main(){
    int num,reversed=0,digit;
    cout<<"Enter a number :"<<endl;
    cin>>num;

    int temp = num;

    while(temp!=0){
        digit=temp%10;
        reversed=(reversed*10)+digit;
        temp=temp/10;
    }

    cout<<"Reverse of "<<num<<" = "<<reversed;


    return 0;
}