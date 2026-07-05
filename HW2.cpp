#include<iostream>
using namespace std;

int arrintsect(int arr1[], int arr2[], int size1, int size2) {
    for(int i=0; i<size1; i++) {
        bool check=true;
        for(int j=0; j<size2; j++) {
            if(arr1[i]==arr2[j]) {
                check = false;
                break;
            }
        }
        if(!check) {
            cout<<arr1[i]<<endl;
        }
    }
    return 0;
}

int main() {
    int arr1[]={1,2,3,4,12,6,7,8,9,0}, arr2[]={1,3,5,7,9,11,22,33,44,55}, size1=10, size2 =10;
    arrintsect(arr1,arr2,size1,size2);

    return 0;
}