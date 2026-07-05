#include<iostream>
using namespace std;

int joy(int n) {
    int k= n>>1;
    if((k+k)==n) {
        cout<< n <<" is even"<<endl;
    }
    else {
        cout<< n <<" is odd"<<endl;
    }
    return 0;
}
int main() {
    joy(76);  // first input is 10, 2nd input is 11. btw i guess code is wrong as you can see errors. tho idk what error is
    return 0;
}