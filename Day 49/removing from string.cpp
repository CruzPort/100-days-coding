class Solution {
public:
    string removeStars(string s) {
        vector<char> v;
        string ans="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='*')  v.pop_back();
            else  v.push_back(s[i]);
        }
        for(int i=0;i<v.size();i++){
            ans+=v[i];
        }
        return ans;
    }
};
auto init = []()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();
