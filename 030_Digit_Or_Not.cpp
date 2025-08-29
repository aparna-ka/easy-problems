#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a Digit : \n";
    cin>>num;
    if(num>=0 && num<=9){
        cout<<num<<" is a digit";
    }
    else{
        cout<<num<<" is not a digit";
    }
    return 0;
}