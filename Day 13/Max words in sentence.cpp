class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxCount = 0;
        for (const auto& sentence : sentences) {
            int wordCount = 1; 
            for (char c : sentence) {
                if (c == ' ') wordCount++; 
            }
            maxCount = std::max(maxCount, wordCount);
        }
        return maxCount;
    }
};
