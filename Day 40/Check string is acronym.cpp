class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        int j=0;
        if(s.size()!=words.size()){
            return false;
        }
        for(int i=0;i<s.size();i++){
                if(words[j++][0]!=s[i]){
                    return false;
                }
        }
        return true;
    }
};
