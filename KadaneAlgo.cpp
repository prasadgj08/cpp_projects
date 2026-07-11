#include<iostream>
#include<vector>
using namespace std;

int maxSubArrSum(vector<int>& nums) {
    int sum=0,maxsum=nums[0];
    for(int i=0; i<nums.size(); i++) {
        sum += nums[i];
        if(sum>maxsum) {
            maxsum = sum;
        }
        if(sum<0) {
            sum=0;
        }
    }
    return maxsum;

}
int main() {
    vector<int>nums={-1,3,-2,4,-6,5};
    cout<<maxSubArrSum(nums)<<endl;
    return 0;
}