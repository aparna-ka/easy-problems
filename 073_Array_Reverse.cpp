#include<iostream>
using namespace std;
int main(){
    int n,a[100],i;
    cout<<"Enter size of array :";
    cin>>n;

    cout<<"Enter array elements : ";
    for(i=0;i<n;i++){
        cin>>a[i];
    }

    for(i=0;i<n/2;i++){
        int temp = a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }

    cout<<"Reversed array : \n";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
    
    return 0;
}