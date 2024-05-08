class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        map<int, int> mp1;
        vector<string> result(n);
        
        for (int i = 0; i < n; i++) {
            mp1[score[i]] = i;
        }       
        sort(score.begin(), score.end(), greater<int>());   
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                result[mp1[score[i]]] = "Gold Medal";
            } else if (i == 1) {
                result[mp1[score[i]]] = "Silver Medal";
            } else if (i == 2) {
                result[mp1[score[i]]] = "Bronze Medal";
            } else {
                result[mp1[score[i]]] = to_string(i + 1);
            }
        }
        
        return result;
    }
};
