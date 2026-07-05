#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    int arr[n];
    int nofeven=0, nofodd=0;
   
    cout<<endl<<"enter numbers you want to store in array : ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
        if(arr[i]%2==0) {
            nofeven++;
        }
        else {
            nofodd++;
        }
    }
    cout<<endl<<"Number of even and odd numbers recived as input respectively are "<<nofeven<<" "<<nofodd<<endl;
   
    return 0;
}