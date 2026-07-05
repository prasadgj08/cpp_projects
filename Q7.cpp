#include<iostream>
using namespace std;

int killer() 
{
    int num;
    cout<<"enter your number :";
    cin>>num;
    int rem, ans=0, pow=1;
    while(num>0) {
        rem = num%2;
        num=num/2;
        ans = ans + rem*pow;
        pow=pow*10;
    }
    return ans;
}

int main()
{
    cout<<endl<<killer()<<endl;
    return 0;
}