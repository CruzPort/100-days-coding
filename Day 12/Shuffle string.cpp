class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = indices.size();
        string restored(n, ' ');

        for (int i = 0; i < n; ++i) {
            restored[indices[i]] = s[i]; 
        }

        return restored;
    }
};
