class Solution {
public:
    Solution() {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);
        std::cout.tie(NULL);
    }

    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> result(l.size());
        vector<short> checked(nums.size());
        
        for (int i = 0; i < l.size(); i++)
            result[i] = arithmetic(nums, checked, i+1, l[i], r[i]);

        return result;
    }

    bool arithmetic(vector<int>& nums, vector<short>& checked, int checkId, int lo, int hi) {
        if (hi - lo < 1)
            return false;

        int minNum = INT_MAX;
        int maxNum = INT_MIN;
        for (int i = lo; i <= hi; i++) {
            minNum = min(minNum, nums[i]);
            maxNum = max(maxNum, nums[i]);
        }

        if (minNum == maxNum)
            return true;
            
        if ((maxNum - minNum) % (hi - lo) != 0)
            return false;

        int diff = (maxNum - minNum) / (hi - lo);

        for (int i = lo; i <= hi; i++) {
            if ((nums[i] - minNum) % diff || checked[(nums[i] - minNum) / diff] == checkId)
                return false;
            checked[(nums[i] - minNum) / diff] = checkId;
        }
        
        return true;
    }


};
