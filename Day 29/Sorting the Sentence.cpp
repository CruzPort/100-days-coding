class Solution {
public:
    static bool comp(string &a,string &b){
        return a[a.length()-1]< b[b.length()-1];
    }
    string sortSentence(string s) {
        stringstream ss(s);
        string temp ;
        vector<string>res;
        while(ss>>temp){
            res.push_back(temp);
        }
        sort(res.begin(),res.end(),comp);
        //cout<<res[0];
        string address = "";
        for(auto word:res){
            address+=word.substr(0,word.length()-1);
            address+=' ';
        }
        address.pop_back();
        return address;
    }
};
