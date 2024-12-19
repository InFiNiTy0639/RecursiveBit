#include <bits/stdc++.h>
using namespace std;
#define VI vector<int>
class Solution {
public:
    void nextPermutation(VI& nums) {
        int i = nums.size()-2;
        while(i>=0 && nums[i]>=nums[i+1]) i--;
        if(i>=0){
            int j  = nums.size()-1;
            while(j>=0 && nums[j]<=nums[i]) j--;
            swap(nums[j],nums[i]);
        }
        reverse(nums.begin()+1+i, nums.end());
    }
};
int main() {
    VI nums = {3,2,1};
    Solution soln;
    soln.nextPermutation(nums);
    for(int num : nums) cout << num << " ";
    cout << endl;
    return 0;
}
