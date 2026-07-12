#include<iostream>
#include<vector>
#include <unordered_set>
using namespace std;
int LuckyNum(vector<int>& nums) {
    unordered_multiset<int>checklist(nums.begin(), nums.end());
    for(int i=0; i<nums.size(); i++) {
        if(checklist.count(nums[i]) == nums[i]) {
            return nums[i];
        }
    }
    return 0;
}
int main() {
    vector<int>nums={2,3,4,5,6,7,8,9,9,9,9,9,9,9,9,9};
    cout<<LuckyNum(nums)<<endl;
    return 0;
}