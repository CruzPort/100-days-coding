class Solution {
public:
    string toLowerCase(string s) {
        
            for(char& c: s)
            {
                // if(c>='A' && c<='Z') c += 32;
                c = tolower(c);
            }
            return s;
        
    }
};
