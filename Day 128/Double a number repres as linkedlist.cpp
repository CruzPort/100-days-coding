
class Solution {
public:
    int carry = 0;
public:
    void rx(ListNode* t) {
        if(t) {
            rx(t->next);
            if(t) {
                t->val = 2*t->val + carry;
                carry = t->val / 10;
                t->val %= 10;
            }
        }
    }
    ListNode* doubleIt(ListNode* head) {
        rx(head);
        return (carry) ? new ListNode(carry, head) : head;
    }
};
