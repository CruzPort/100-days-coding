class Solution
{
public:
    int sumCounts(vector<int> &nums)
    {
        int res = 0,
            n = nums.size();

        for(int i = 0; i < n; ++i)
        {
            int s[101]{},
                cnt = 0;

            for(int j = i; j < n; ++j)
            {
                if(++s[nums[j]] == 1)
                {
                    ++cnt;
                }

                res += cnt * cnt;
            }
        }

        return res;
    }
};
