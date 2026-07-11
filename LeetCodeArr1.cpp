#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    for(int i=0; i<nums.size(); i++) {
        for(int j=i+1; j<nums.size(); j++) {
            if(i!=j && nums[i]+nums[j]==target) {
                
                cout<<i<<endl<<j<<endl;
            }
        }
    }
        return {};
}

int main() {
    vector<int> nums={1,2,3,4,5,6,7};
    int target=13;
    twoSum(nums, target);
    return 0;
}