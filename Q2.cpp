// so do not print nside function, i assume you mean do not use cout to print value in function but return the value. maybe i assumed wrong
#include<iostream>
using namespace std;

int findLargest(int arr[], int size) {
    int max=-9999; //i tried to ise INT_MIN but for somereason it says undefined. maybe it needs a different lib other than iostream in my compiler as im on linux
    for(int i=0; i<size; i++) {
        if(arr[i]>max) {
            max=arr[i];
        }
    }
    return max;
}
int main() {
    int arr[]={1,2,4,8,99,32};
    int size = 6;
    cout<<findLargest(arr, size)<<endl;
    return 0;
}