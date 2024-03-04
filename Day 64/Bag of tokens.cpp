class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(begin(tokens),end(tokens));
        int l = 0, r = tokens.size()-1, t = 0;
        while(l<=r){
            if(power>=tokens[l]){
                power -= tokens[l++];
                t++;
            }
            else if(r>l+1&&t){
                power += tokens[r--];
                t--;
            }
            else break;
        }
        return t;
    }
};
