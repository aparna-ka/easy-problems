//054_Sum_Of_Even.cpp

#include<iostream>
using namespace std;
int main(){
    int lim,sum=0;
    cout<<"enter the limit: ";
    cin>>lim;
    cout<<"Even numbers upto "<<lim<<" is "<<endl;
    for(int i=0;i<=lim;i++){
        if(i%2==0){
            cout<<i;
            cout<<endl;

            sum=sum+i;
        }
    }
    cout<<"sum of evenumbers upto "<<lim<<" is "<<sum;

    return 0;
}