/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode*prev=NULL,*fut=head->next;
        ListNode*slow=head,*fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            head->next=prev;
            prev=head;
            head=fut;
            fut=fut->next;
        }
        if(fast)slow=slow->next;
        head=prev;
        while(slow){
            if(head->val != slow->val)return false;
            head=head->next;
            slow=slow->next;
        }
        return true;
    }
};
