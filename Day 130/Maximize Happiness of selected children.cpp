class Solution {
public:
    long long maximumHappinessSum(vector<int>& h, int k) { 
        ios_base::sync_with_stdio(false);
                cin.tie(NULL);
        sort(h.begin(),h.end(),greater<int>());
        long long ans=0;
        for(int i=0;i<h.size();i++)
        {
            if(h[i]<=i) break;
            if(k==0) break;
            ans+=h[i]-i;
            k--;
        }
        return ans;
    }
};
