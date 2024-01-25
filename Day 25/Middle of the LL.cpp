class Solution {
public:
    int getLenght (ListNode* head)
    {
        int size = 0;
        ListNode* curr = head;
        while (curr != nullptr)
        {
            size++;
            curr = curr->next;
        }
        return size;
    }
    ListNode* middleNode(ListNode* head) {
        int size = getLenght(head);
        int pos = size/2+1;
        int curr_pos = 1;
        ListNode* curr = head;

        while (curr_pos != pos)
        {
            curr_pos++;
            curr = curr->next;
        }
        
        return curr;
    }
};
