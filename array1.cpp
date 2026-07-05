#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for(int i=0; i<size; i++) {
        if(arr[i]==target) {
            return i;
        }
    }
    int bitxor = (arr[0]^arr[1]^arr[2]^arr[3]^arr[4]);   //probably not preferred method for xor
    int bitXor1=arr[0];
    for(int i=0;i<size-1; i++) {
        bitXor1 = bitXor1^arr[i+1];
    }
    return bitXor1; //im doing decimal value for now. not converting it to decimal because im kind of lazy. but if you want i will
}
int main() {
    int size=5, target=17;
    int arr[]={2,4,8,16,32};
    cout << linearSearch(arr, size, target) << endl;
    return 0;
}
//here in last art of linearsearch, we cold have initialised bitxor1 =0, then in loop, i<size, and inside loop, bitxor1^arr[i]. making everything simpler !!!