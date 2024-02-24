class Solution {
    vector<int> par;
    int find(int i)
    {
        if(par[i]==i) return i;
        return par[i]=find(par[i]);
    }
public:
    vector<int> findAllPeople(int n, vector<vector<int>>& meetings, int firstPerson) {
        par.resize(n);
        for(int i=0;i<n;i++)
            par[i]=i;

        int a=find(0);
        int b=find(firstPerson);
        par[b]=a;

        sort(meetings.begin(), meetings.end(), [](auto &A, auto &B){
            return A[2]<B[2];
        });

        vector<int> ppl;
        int M=meetings.size();
        for(int i=0;i<M;)
        {
            ppl.clear();
            int time=meetings[i][2];
            for(;i<M && meetings[i][2]==time;i++)
            {
                int a=find(meetings[i][0]);
                int b=find(meetings[i][1]);
                par[b]=a;
                ppl.push_back(meetings[i][0]);
                ppl.push_back(meetings[i][1]);
            }
            for(int p:ppl){
                if(find(p)!=find(0))
                    par[p]=p;
            }
        }

        vector<int> res;
        for(int i=0;i<n;i++)
            if(find(i)==find(0))
                res.push_back(i);
        return res;
    }
};
