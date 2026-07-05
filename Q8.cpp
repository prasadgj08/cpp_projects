#include<iostream>
using namespace std;

int findLargest(int arr[], int size) {
    int largest=arr[0];
    for(int i=0; i<size; i++) {
        if(arr[i]>largest) {
            largest=arr[i];
        }
    }
    return largest;
}

int findSmallest(int arr[], int size) {
    int smallest=arr[0];
    for(int i=0; i<size; i++) {
        if(arr[i]<smallest) {
            smallest=arr[i];
        }
    }
    return smallest;
}

int sumArray(int arr[], int size) {
    int addition=0;
    for(int i=0; i<size; i++) {
        addition=addition+arr[i];
    }
    return addition;
}

int average(int arr[], int size) {
    int ignorethename= sumArray(arr, size);
    int avg = ignorethename/size;
    cout<<ignorethename<<endl<<endl;
    return avg;
}

int main() {
    int arr[]={1,2,3,4,5,6,7}, size=7;
    cout<<endl<<findLargest(arr,size)<<endl;
    cout<<endl<<findSmallest(arr,size)<<endl;
    cout<<endl<<average(arr,size)<<endl;
    return 0;
}