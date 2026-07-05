#include<iostream>
using namespace std;

int sum(int arr[], int size) {

    int n=0;
    for(int i=0; i<size; i++) {
        n=n+arr[i];
    }
    return n;
}

int main() {
    int arr[]={1,2,3,4,5,6,7,8,9,11}, size=10;
    cout << "sum of all elements of array : " << sum(arr, size)<<endl;
    return 0;
}