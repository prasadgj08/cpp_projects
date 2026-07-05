//idk if i understod the question properly coz this one feeels too les complex compared to last one. or maybe im taking it wrong way.
// here is how i understood it
#include<iostream>
using namespace std;

int binConv(int arr[], int size) {
    int add=0, pow=1;
    for(int i=size-1; i>=0; i--) {
        add= add + arr[i]*pow;
        pow=pow*2;
    }
    return add;
}
int main() {
    int size=5;
    int array[]={1,0,1,1,0};   // 1010=0, 1011=11, 10110=22 I guess
    cout<<binConv(array, size)<<endl;
    return 0;
}