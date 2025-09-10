//051_B_Pattern_Star.cpp
//Pyramid Pattern
#include<iostream>
using namespace std;
int main(){
    int n,row,star,space;
    cout<<"Enter the number of rows: ";
    cin>>n;

    for(row=1;row<=n;row++){
        for(space=1;space<=n-row;space++){
            cout<<" ";
        }
        for(star=1;star<=2*row-1;star++){
            cout<<"*";
        }
        for(space=1;space<=n-row;space++){
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}