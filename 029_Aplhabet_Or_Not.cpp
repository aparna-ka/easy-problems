#include<iostream>
using namespace std;
int main(){
    char letter;
    cout<<"Enter an alphabet : \n";
    cin>>letter;
    if((letter>='A' && letter<='Z') || (letter>='a' && letter<='z'))
    cout<<letter<<" is an alphabet";
    else
    cout<<letter<<" is not an alphabet";
    return 0;

}