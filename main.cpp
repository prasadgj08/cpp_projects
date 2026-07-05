#include<iostream>
using namespace std;
int killer( int arr[], int size )  {
   
 
    for(int i =0; i<3; i++) {
        cout<<arr[i]<<endl<<endl;
        arr[i]=2*arr[i];
        cout<<arr[i]<<endl<<endl;
    }
    return 0;

}
int main() {
    int arr[]={1,2,3};
    killer(arr, 3);
    //int main :

    
    for(int i =0; i<3; i++) {
        cout<<arr[i]<<endl;

    }
    return 0;
}