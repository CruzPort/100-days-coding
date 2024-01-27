class Solution {
public:
    Solution() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }

    int similarPairs(vector<string>& words) {
        unordered_map<int, int> codes;  
        int count = 0;

        for (const auto& word : words) {
            int wordId = 0;
            for (char c : word) {
                c -= 'a';
                wordId |= 1 << (c + 1);
            }

            count += codes[wordId]++;
        }

        return count;
    }
};
