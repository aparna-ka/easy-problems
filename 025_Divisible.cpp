#include<iostream>
using namespace std;
int main(){

    int num;
    cout<<"Enter a number : \n";
    cin>>num;
    if(num%5==0 && num%11==0){
        cout<<num<<" is divisible by 5 and 11";
    }
    else{
      cout<<num<<" is not divisible by 5 and 11";
    }
    return 0;
}