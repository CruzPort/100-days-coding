class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        while (head) {
            ListNode* memoNext = head->next;
            head->next = prev;
            prev = head;
            head = memoNext;
        }
        return prev;
    }

    void reorderList(ListNode* head) {
        ListNode* res = new ListNode(0, head);
        
        ListNode* slow = res;
        ListNode* fast = res;
        
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        fast = slow->next;
        slow->next = NULL;

        ListNode* left = head;
        ListNode* right = reverseList(fast);
        ListNode* prev = res;

        while (left || right) {
            prev->next = left;
            prev = prev->next;
            left = left->next;

            if (right) {
                prev->next = right;
                prev = prev->next;
                right = right->next;
            }
        }
        
        head = res->next;
    }
};
