#include<iostream>
using namespace std;

int reverseArray(int arr[], int size) {
    int endIndex= size-1;
    cout<<"og array : ";
      for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    for(int i=0; i<size/2; i++) {
        swap(arr[i],arr[endIndex-i]);
    }
    cout<<"\nreverse array :";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10}, size=10;
    reverseArray(arr,size);
    return 0;
}