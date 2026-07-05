#include<iostream>
using namespace std;

 int indexFinder() {
    int size,x,n;
    int test=1;
    cout << "enter size of array : ";
    cin>>size;
    int arr[size];
    cout<<"\n Enter elements of array : ";
    for(int i=0; i<size; i++) {
        cin>>arr[i];
    }
    cout<< "\n\nsearch element : ";
    cin>>x;
    for(int i=0; i<size; i++) {
        test=1;
        if(arr[i]==x) {
            test=0;
            n=i;
            break;
        }
    }
    if(test==0){
        cout<<"Found at index : " << n<<endl;
    }
    else {
        cout<<"not found";
    }
    return 0;
} 
/*int indexFinder() {
    int size,x,n;
    int test;
    cout << "enter size of array : ";
    cin>>size;
    int arr[size];
    cout<<"\n Enter elements of array : ";
    for(int i=0; i<size; i++) {
        cin>>arr[i];
    }
    cout<< "\n\nsearch element : ";
    cin>>x;
    for(int i=0; i<size; i++) {
        test =1;
        if(arr[i]==x) {
            cout<< "index found at : " << i<<endl;
            test =0;
            break;
        }
    }
    if(test==1) {
        cout<< "not foun"<<endl;
    }
    
    return 0;
} */
int main() {
    indexFinder();
    return 0;
}