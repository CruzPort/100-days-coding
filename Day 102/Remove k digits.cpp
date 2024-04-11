class Solution {
public:
    string removeKdigits(string num, int k) {
         if (k >= num.length()) {
            return "0";
        }

        std::vector<char> result;

        for (char digit : num) {
            while (k > 0 && !result.empty() && result.back() > digit) {
                result.pop_back();
                k--;
            }

            result.push_back(digit);
        }

        result.resize(result.size() - k);

        std::string result_str(result.begin(), result.end());
        size_t nonZeroIndex = result_str.find_first_not_of('0');
        return (nonZeroIndex == std::string::npos) ? "0" : result_str.substr(nonZeroIndex);
    }
};
