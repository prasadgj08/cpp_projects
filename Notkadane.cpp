#include<iostream>
#include<vector>
using namespace std;

int Maxsubarrsum(vector<int>& nums) {
    int maxsum = nums[0];
    for(int i=0; i<nums.size(); i++) {
        int sum =nums[i]; //sum =0 if int j=i insted if int i=j+1
        for(int j=i+1; j<nums.size(); j++) {  //int j=i if sum=0 between the loops
            sum += nums[j];
            if(sum>maxsum) {
                maxsum=sum;
            }
        }
    }
    return maxsum;
}


int main() {

    vector<int>nums = {1,2,3,4,5,6};
    cout<<Maxsubarrsum(nums)<<endl;
    return 0;
}