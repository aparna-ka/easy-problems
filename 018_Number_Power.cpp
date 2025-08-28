#include<iostream>
#include<math.h>
using namespace std;
int main(){
int num,power;

cout<<"enter a base : \n";
cin>>num;
cout<<"enter the exponent : \n";
cin>>power;
int result=pow(num,power);
cout<<num<<"^"<<power<<" = "<<result;
return 0;

}


