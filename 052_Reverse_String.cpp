//052_Reverse_String.cpp

//Print Reverse Of a String

#include<iostream>
#include<string>
using namespace std;

int main(){
    string word;
    cout<<"Enter a word: \n";
    getline(cin,word);
    for(int i=word.length()-1;i>=0;i--){
        cout<<word[i];
    }
    return 0;
}