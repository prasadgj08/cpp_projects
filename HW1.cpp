#include<iostream>
using namespace std;

int uniquenum(int arr[], int size) {
    int bad1[size];
    for(int i=0; i<size; i++) {
        for(int j=i+1; j<size; j++) {
            if(arr[i]==arr[j]) {
                bad1[i]=arr[i];
                bad1[j]=arr[j];
            }
        }
    }
    for(int i=0; i<size; i++) {
        if(arr[i]!=bad1[i]) {
            cout<<arr[i]<<endl;
        }
    }
    return 0;
}

int main() {
    int arr[] = {1, 2, 3, 4, 3, 5, 2, 1, 1,4}, size = 10;
    uniquenum(arr,size);
    return 0;
}