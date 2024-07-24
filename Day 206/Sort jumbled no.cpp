class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<tuple<int, int, int>> mappedList;
        for (int i = 0; i < nums.size(); i++) {
            string s = to_string(nums[i]);
            string n = "";
            for (char ch : s) {
                n += to_string(mapping[ch - '0']);
            }
            mappedList.push_back(make_tuple(nums[i], stoi(n), i));
        }

        sort(mappedList.begin(), mappedList.end(), [](const auto& a, const auto& b) {
            if (get<1>(a) != get<1>(b)) {
                return get<1>(a) < get<1>(b);
            } else {
                return get<2>(a) < get<2>(b);
            }
        });

        vector<int> sortedNums(nums.size());
        for (int i = 0; i < mappedList.size(); i++) {
            sortedNums[i] = get<0>(mappedList[i]);
        }

        return sortedNums;
    }
};

int main() {
    Solution sol;
    vector<int> mapping = {2, 1, 4, 8, 6, 3, 0, 9, 7, 5};
    vector<int> nums = {990, 332, 981, 330};
    vector<int> sortedNums = sol.sortJumbled(mapping, nums);
    for (int num : sortedNums) {
        cout << num << " ";
    }
    return 0;
}
