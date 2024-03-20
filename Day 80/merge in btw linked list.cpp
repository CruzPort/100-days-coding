
class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* curr = list1;
        for (int i = 1; i < a; i++) {
            curr = curr->next;
        }

        ListNode* tmp;
        for (int i = a; i <= b; i++) {
            tmp = curr->next;
            curr->next = curr->next->next;
            delete tmp;
        }

        tmp = curr->next;
        curr->next = list2;

        while (list2->next) {
            list2 = list2->next;
        }

        list2->next = tmp;

        return list1;
    }
};
