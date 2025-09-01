//044_Fibinocci.cpp
#include<iostream>
using namespace std;
int main(){
   int i,lim,first=0,second=1,next;
   cout<<"Enter the limit : \n";
   cin>>lim;

   if(lim>=1)
   cout<<first<<" ";

   if(lim>=2)
   cout<<second<<" ";

   for(i=3;i<=lim;i++){
    next=first+second;
    cout<<next<<" ";

    first=second;
    second=next;
   }
    return 0;
}