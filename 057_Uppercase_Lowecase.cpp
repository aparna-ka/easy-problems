//057_Uppercase_Lowecase.cpp
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    
    string upper=str;
    for(int i=0;i<upper.length();i++){
        upper[i]=toupper(upper[i]);
    }

    string lower=str;
    for(int i=0;i<lower.length();i++){
        lower[i]=tolower(lower[i]);
    }
    cout<<"lower: "<<lower<<endl;
    cout<<"Upper: "<<upper;
    return 0;
}