class Solution {
public:
    int timeRequiredToBuy(vector<int>& ts, int k) {
        int res = 0, target = ts[k];
        for (int i = 0; i <= k; i++) {
            res += min(ts[i], target);
        }
        target--;
        for (int i = k + 1, lmt = ts.size(); i < lmt; i++) {
            res += min(ts[i], target);
        }
        return res;
    }
};
