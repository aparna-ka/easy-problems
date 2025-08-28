
#include<iostream>
using namespace std;
int main(){
    int i,n,product=1;
    cout<<"Enter the limit : \n";
    cin>>n;
    for(i=1;i<=n;i++){
        product=i*product;
    }
    cout<<"product of first "<<n<<" natural numbers "<<product;
    return 0;
}