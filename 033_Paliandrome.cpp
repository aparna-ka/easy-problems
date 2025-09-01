#include<iostream>
using namespace std;
int main(){
    int num,org,rem,rev=0;
    cout<<"Enter the number:";
    cin>>num;

    org=num;

    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }

    if(org==rev)
        cout<<org<<" is Paliandrome";
    else
          cout<<org<<" is not Paliandrome";

    return 0;

}