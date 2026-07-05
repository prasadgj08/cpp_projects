// here idk whats happening. but IMT_MAX isnt being recognised for max value, it just say its undefied
// there is TMP_MAX but im not sure if its imp max. okay i asked copilot and it said since im on linuc, climit which gives int max isnt included with iostream so i have to do it manually

#include<iostream>
using namespace std;

int minmaxswap(int arr[], int size) {
   
    int smallest= 9999999;
    int largest = -9999999;
    int small, large;
    //for minimum
    for(int i=0; i<size; i++) {
        if (arr[i]<smallest){
            smallest=arr[i];
        }
    }
    //for maximim
    for(int i=0;i<size;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    //for min index
    for(int i=0; i<size; i++){
        if(arr[i]==smallest){
            small=i;
        }}
    
    //for max index
    for(int i=0;i<size;i++){
        if(arr[i]==largest){
            large = i;
        }
    }
    swap(arr[large],arr[small]);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
   return 0;
}

int main() {
    int size =6;
    int arr[]={-2,5,3,2,0,9};
    
    minmaxswap(arr,size);
    return 0;
}