#include<iostream>
using namespace std;

int arrev( int arr[], int size ) {
    for(int i=0; i<size; i++) {
        swap(arr[i],arr[(size-1-i)]);
    }
    for(int i=0; i<size; i++) {
        cout << arr[i] << endl ;
    }
    return 0;
}

int main() {
    int arr[]={1,2,3,4,5,6,7,8,9};
    arrev(arr,9);
    return 0;
}