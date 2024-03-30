class Solution {
public:
    Solution(){
        ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    }
    int subarraysWithKDistinct(vector<int>& v, int k) {
        return kDistinct(k, v) - kDistinct(k-1, v);
    }
    int kDistinct(int k, vector<int>& s, int l=0, int r=-1, int res=0)
    {
    vector<int> a(s.size()+1);
    while(r+1<s.size()){
        k-=!a[s[++r]]++;
        while(k<0) k+=!--a[s[l++]];
        res+=r-l+1;
    }
    return res;
}
};
