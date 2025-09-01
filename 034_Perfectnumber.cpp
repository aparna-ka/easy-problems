#include<iostream>
using namespace std;
int main(){
    int num,sum=0,i;
    cout<<"Enter The Number : \n";
    cin>>num;

    cout<<"\n All divisors(including "<< num<< ") : "<<"\n";
    for(int i=1;i<=num;i++){
        if(num%i==0)
        cout<<"\t"<<i;
    }


    cout<<"\n Proper divisors(excluding "<< num<< ") : "<<"\n";
    for(i=1;i<num;i++){
        if(num%i==0)
        {
            cout<<"\t"<<i;
            sum=sum+i;
        }
    }

    cout<<"\n sum of proper divisors :"<<sum <<"\n\n";

    if(num==sum)
    cout<<num<<" perfect number";
    else
    cout<<num<<" not a perfect number";
   
    return 0;
}