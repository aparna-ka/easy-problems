#include<iostream>
using namespace std;
int main(){
    int lim,sum=0;
    cout<<"enter the limit: ";
    cin>>lim;
    cout<<"Odd numbers upto "<<lim<<" is "<<endl;
    for(int i=1;i<=lim;i++){
        if(i%2!=0){
            cout<<i;
            cout<<endl;

            sum=sum+i;
        }
    }
    cout<<"sum of Oddumbers upto "<<lim<<" is "<<sum;

    return 0;
}