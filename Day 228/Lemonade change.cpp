class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        std::unordered_map<int, int> myMoney;

        for (const auto& bill: bills) {
            if (bill == 5) {
                ++myMoney[5];
            } else {
                int fives = myMoney[5];
                int tens = myMoney[10];

                if (bill == 10) {
                    // give a 5 back
                    if (fives >= 1) {
                        myMoney[5] -= 1;
                    } else {
                        return false;
                    }
                } else if (bill == 20) {
                    if (tens >= 1 && fives >= 1) {
                        myMoney[10] -= 1;
                        myMoney[5] -= 1;
                    } else if (fives >= 3) {
                        myMoney[5] -= 3;
                    } else {
                        return false;
                    }
                }

                // success, take the money
                ++myMoney[bill];
            }
        }

        return true;
    }
};
