
#include<iostream>
#include<math.h>
using namespace std;

int main(){
float a,b,c,D;
cout<<"Enter Coefficient, a :\n";
cin>>a;
cout<<"Enter Coefficient, b :\n";
cin>>b;
cout<<"Enter Coefficient, c :\n";
cin>>c;

D=b*b-(4*a*c);

if(a==0){
    cout<<"not a quadratic equation coz 'a' cannot be zero \n";
    return 0;
}

if(D>0){
    float r1=((-b + sqrt(D))/(2*a));
    float r2=((-b - sqrt(D))/(2*a));
    cout<<"Root 1 = "<<r1<<endl;
    cout<<"Root 2 = "<<r2;

}

if(D==0){
    float r = -b/(2*a);
    cout<<"Root = "<<r;
}

return 0;
}


