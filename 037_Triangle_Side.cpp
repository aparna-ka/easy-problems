#include<iostream>
using namespace std;
int main(){
    int s1,s2,s3;
    cout<<"Enter 3 sides of a triangle : \n";
    cin>>s1>>s2>>s3;

    if(s1==s2&&s2==s3){
        cout<<"Equilateral Triangle";
    }
    else if(s1==s2 || s2==s3 || s1==s3)
    {
        cout<<"isosceless Triangle";
    }
    else{
        cout<<"Scalene Triangle";
    }

    return 0;
}