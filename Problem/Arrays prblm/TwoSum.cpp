// https://leetcode.com/problems/two-sum/description/
#include <bits/stdc++.h>
using namespace std;
#define VI vector<int>
#define UNM unordered_map<int,int>
class solution{
public:
    VI twosum(VI &nums, int target){
        int n = nums.size();
        UNM mp;
        for (int i = 0; i < n; i++) mp[nums[i]] = i;
        for (int i = 0; i < n; i++){
            int rem = target - nums[i];
            if (mp.find(rem) != mp.end() && mp[rem] != i) return {i, mp[rem]};
        }
        return {};
    }
};
int main(){
    int n;cin >> n;
    VI a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int target;cin >> target;
    solution soln;
    VI ans = soln.twosum(a, target);
    if (!ans.empty()){
        for (int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
        cout << endl;
    }
    else cout << "NO solution found" << endl;
    return 0;
}