class Solution {
public:
    int countKeyChanges(string s) {
        int count=0;
        for(int i=0;i<s.length()-1;i++)
        {
            char t=tolower(s[i]);
            char x=tolower(s[i+1]);
            if(t!=x)
                count++;
        }
        return count;
        
    }
};
