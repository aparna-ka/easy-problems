#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter the size of the array : ";
    cin>>n;
    int arr[100];
    cout<<"enter "<<n<<" elements: \n";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    int Max_Elmnt = arr[0];
    int Max_Index = 0;

    for(i=1;i<n;i++){
        if(arr[i]>Max_Elmnt){
            Max_Elmnt = arr[i];
            Max_Index = i;
        }
    }

      cout<<" largest element is "<<Max_Elmnt <<" at index "<< Max_Index;
}

