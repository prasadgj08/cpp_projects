#include<iostream>
#include<vector>
using namespace std;
int firstMissingPositive(vector<int>& nums) {
        
        
        for(int i = 1; i<nums.size()+1; i++) {
             bool check = false;
            for(int j=0; j<nums.size(); j++) {
                if(i == nums[j]) {
                    check = true;
                    break;
                }
            }
            if(!check) {
                return i;
            }
        
    }
    return 0;
}
int main() {

    vector<int>nums={1,2,3,-1,4,5,6,7,8,9};
    cout<<firstMissingPositive(nums)<<endl;
    return 0;
}

        
