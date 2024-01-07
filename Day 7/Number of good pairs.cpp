class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> freq;
        
        for (int num : nums) {
            freq[num]++;
        }
        int count = 0;      
        for (auto& p : freq) {
            int n = p.second; 
            
            if (n > 1) {
                count += n * (n - 1) / 2;
            }
        }
        return count;
    }
};
