#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter a Year : \n";
    cin>>year;
    if((year%4==0 && year%100!=0 ) || (year%400==0)){
        cout<<year<<" is leap year";
    }
    else{
        cout<<year<<" is not leap year";
    }
    return 0;
}