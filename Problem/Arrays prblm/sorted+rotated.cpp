// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
#include<bits/stdc++.h>
using namespace std;
#define VI vector<int>
class Solution {
public:
    bool check(VI& nums) {
        int n = nums.size(),cnt= 0;
        for(int i = 0 ;i<n ;i++){
            if(nums[i]>nums[(i+1)%n])cnt++;
            if(cnt>1) return false;
        }
        return true;
    }
};