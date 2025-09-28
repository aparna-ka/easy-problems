#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[100];
    cout<<"Enter the elements of array: ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    int min_el = arr[0];
    int min_indx = 0;

    for(i=1;i<n;i++){
        if(arr[i]<min_el){
            min_el=arr[i];
            min_indx=i;
        }
    }
    cout<<"minimum element is "<<min_el<<" at index "<<min_indx;
    return 0;
}