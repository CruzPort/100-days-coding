class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val=(node->next)->val;
        while((node->next)->next!=NULL){
            (node->next)->val=((node->next)->next)->val;
            cout<<node->val<<"->";
            node=node->next;
        }
        node->next=NULL;
    }
};
