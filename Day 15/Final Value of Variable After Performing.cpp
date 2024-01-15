class Solution {
public:
    int finalValueAfterOperations(const std::vector<std::string>& operations) {
        int X = 0;
        for (const auto& op : operations) {
            X += (op[1] == '-') ? -1 : 1;
        }
        return X;
    }
};
