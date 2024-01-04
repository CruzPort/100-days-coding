class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        // Check if str1 + str2 equals str2 + str1, if not, there is no common divisor
        if (str1 + str2 != str2 + str1) {
            return "";
        }
        return str1.substr(0, std::gcd(str1.size(), str2.size()));
    }
};
