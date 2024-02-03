class Solution {
public:
    void createMapping(string& pattern) {
        char start = 'a';
        char mapping[130] = {0};

        for (auto ch: pattern) {
            if (mapping[ch] == 0) {
                mapping[ch] = start;
                start++;
            }
        }

        // updating the string
        for (int i=0; i<pattern.length(); i++) {
            pattern[i] = mapping[pattern[i]];
        }
    }

    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        createMapping(pattern);

        for (int i=0; i<words.size(); i++) {
            // storing in a temporary string so that we don't change the actual word
            string tempStr = words[i];
            createMapping(tempStr);

            if (tempStr == pattern) {
                ans.push_back(words[i]);
            }
        }

        return ans;
    }
};
