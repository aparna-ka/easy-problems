
#include<iostream>
using namespace std;
int main(){
    int i,a,res;
    cout<<"Enter a number : \n";
    cin>>a;

    cout<<"----Table of "<<a<<"----"<<endl;

    for(i=1;i<=10;i++){
        res=a*i;
        cout<<a<<" * "<<i<<" = "<<res;
        cout<<"\n";
    }

    return 0;
}