class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int n = nums.size();
        vector<int> freq(n+1, 0);
        int max_freq = 0;
        
        for(int i = 0 ; i < n ; i++){
            freq[nums[i]]++;
            max_freq = max(max_freq, freq[nums[i]]);
        }
        
        vector<vector<int>> ans(max_freq);
        
        for(int i = 0 ; i < n+1 ; i++){
            int m = freq[i];
            
            for(int j = 0 ; j < m ; j++){
                ans[j].push_back(i);
            }
        }
        
        return ans;
    }
};
