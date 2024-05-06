
class Solution {
public:
    Solution()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    ListNode* removeNodes(ListNode* head) {
        vector<int> vals;
        auto curr{head};
        while (curr) {
            vals.push_back(curr->val);
            curr = curr->next;
        }
        int m = vals.back();
        int j = vals.size() - 2;
        while (j >= 0) {
            if (vals[j] < m) {
                vals[j] = 0;
            } else {
                m = vals[j];
            }
            --j;
        }
        ListNode* prev{nullptr};
        curr = head;
        for (auto d : vals) {
            if (d > 0) {
                prev = curr;
                curr = curr->next;
            } else {
                if (prev) {
                    prev->next = curr->next;
                    curr = prev->next;
                } else {
                    head = curr->next;
                    curr = head;
                }
            }
        }
        return head;
    }
};
