//not making a functio for this one. this one seems a bit hard. so wont waste time in writing a functin
#include<iostream>
using namespace std;
int main() {
    int arr[]={1,2,3,4,59,6,7,68,99}, size =9;
    int largest = arr[0];
    int largest2 = arr[0];
    //my logic is to find lasrest and eliminate it and find largest agai from remaining. 
    //but ik its not a good method as for big arrays, we have to keep repeating the process, tho we can make a function and call it in a loop. so idk if this method is the best
    for(int i=0; i<size; i++) {
        if (arr[i]>largest) {
            largest = arr[i];
        }
    }
    for(int i=0; i<size; i++) {
        if(arr[i]!=largest) {
            if (arr[i]>largest2) {
            largest2 = arr[i];
        }
        }
    }
    cout<<largest2<<endl;
    return 0;
}
