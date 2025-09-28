#include<iostream>
using namespace std;
int main(){
    int n,i,sum=0;
    cout<<"Enter the size of the array : \n";
    cin>>n;

    cout<<"Enter the array elements : \n";
    int a[100];
    for(i=0;i<n;i++){
        cin>>a[i];
        sum=sum+a[i];
    }

    cout<<"sum = "<<sum;
    return 0;
}