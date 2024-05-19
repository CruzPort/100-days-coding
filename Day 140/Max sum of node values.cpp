
using namespace std;

class Solution { 
    public:
    long long maximumValueSum(vector<int> const &nums, int const x,
                              vector<vector<int>> const &edges) {
        long ret{0};
        int min_pos{INT_MAX}, max_neg{INT_MIN};
        short cnt_pos{0};
        for(auto const num: nums) {
            ret += num;
            int const dx = (num^x) - num;
            if(dx > 0) {
                ++cnt_pos;
                ret += dx;
                min_pos = min(min_pos, dx);
            }
            else {
                max_neg = max(max_neg, dx);
            }
        }
        return ret + ((cnt_pos&1) ? ((min_pos + max_neg > 0) ? max_neg : -min_pos) : 0);
    }
};

auto _ = []{ ios::sync_with_stdio(false); cin.tie(nullptr); return 0; }();
