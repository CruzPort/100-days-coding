class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        unordered_map<int, int> mp;
        int n = nums.size(), i = 0, j = 0, ans = 0, flag = 0;
        while(j < n){
            if(++mp[nums[j]] > k) flag = 1;
            while(flag and i <= j){
                ans = max(ans, j - i);
                --mp[nums[i++]];
                if(mp[nums[j]] == k) flag = 0;
            }
            j++;
        }
        ans = max(ans, j - i);
        return ans;       
    }
};
