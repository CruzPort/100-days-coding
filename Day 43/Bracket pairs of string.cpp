class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string, string> knowledgeMap;
        for (const auto& val: knowledge){
            knowledgeMap[val[0]] = val[1];
        }

        int i = 0;
        int n = s.size();
        vector<char> res;
        while (i < n){

            if (s[i] == '('){
                i += 1;
                int startInd = i;
                while (i < n && s[i] != ')'){
                    i += 1;
                }
                string currWord{s.begin()+startInd, s.begin()+i};
                if (knowledgeMap.find(currWord) == knowledgeMap.end()){
                    res.push_back('?');
                }else{
                    string replaceMent = knowledgeMap[currWord];
                    for (const char c: replaceMent){
                        res.push_back(c);
                    }
                }
            }else{
                res.push_back(s[i]);
            }

            i += 1;
        }

        return string{res.begin(), res.end()};
    }
};
