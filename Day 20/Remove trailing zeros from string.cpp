class Solution {
public:
    std::string removeTrailingZeros(const std::string& num) {
        size_t right = num.find_last_not_of('0');
        return (right != std::string::npos) ? num.substr(0, right + 1) : "0";
    }
};
