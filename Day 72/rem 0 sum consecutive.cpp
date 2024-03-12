class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) 
    {
        deque<int>dq;
        ListNode* temp=head;
        set<long long>st;
        st.insert(0);
        long long sum=0;
        while(temp!=NULL)
        {
            dq.push_back(temp->val);
            sum=sum+temp->val;
            temp=temp->next;
            if(st.find(sum)!=st.end())
            {
                long long int val=sum;
                while(!dq.empty())
                {
                    st.erase(sum);
                    sum-=dq.back();
                    dq.pop_back();
                    if(sum==val) break;
                }
            }
            st.insert(sum);
        }
        ListNode* nhead=NULL;
        ListNode* mover=NULL;
        while(!dq.empty())
        {
            if(nhead==NULL)
            {
                nhead=new ListNode(dq.front());
                mover=nhead;
            }
            else{
                mover->next=new ListNode(dq.front());
                mover=mover->next;
            }
            dq.pop_front();
        }
        return nhead;
    }
};
