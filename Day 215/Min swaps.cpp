class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        int totalOnes = 0;
        
        for (int num : nums) {
            totalOnes += num;
        }
        
        if (totalOnes == 0 || totalOnes == n) return 0;
        
        int currentOnes = 0;
        
        // Count 1's in the first window of size totalOnes
        for (int i = 0; i < totalOnes; i++) {
            currentOnes += nums[i];
        }
        
        int maxOnes = currentOnes;
        
        for (int i = 0; i < n; i++) {
            currentOnes -= nums[i];
            currentOnes += nums[(i + totalOnes) % n];
            maxOnes = max(maxOnes, currentOnes);
        }
        
        return totalOnes - maxOnes;
    }
};
