class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if ( nums.size() <= 2)return -1;
        
        int i = nums.size() /2;
        int mx = max(nums[i],max(nums[i+1],nums[i-1]));
        int mn = min(nums[i],min(nums[i+1],nums[i-1]));
        
        if(nums[i] != mx && nums[i] != mn) return nums[i];
        else if (nums[i+1] != mx && nums[i+1] != mn) return nums[i+1];
        else return nums[i-1];
    }
};
