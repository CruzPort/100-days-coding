class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        auto newEnd = std::remove(nums.begin(), nums.end(), val);      
        return std::distance(nums.begin(), newEnd);
    }
};