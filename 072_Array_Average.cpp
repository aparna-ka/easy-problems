#include<iostream>
using namespace std;
int main(){
    int n,a[100],i;
    float sum = 0;

    cout<<"Enter the size of array : \n";
    cin>>n;

    cout<<"Enter the array elements: \n";
    for(i=0;i<n;i++){
        cin>>a[i];
        sum=sum+a[i];
        
    }
    float avg=sum/n;
    cout<<"Average = "<<avg;
    return 0;
}