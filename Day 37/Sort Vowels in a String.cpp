bool isVowel(char ch)
{
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
    ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        return true;

    return false;
}

class Solution {
public:
    string sortVowels(string s) {
        vector<int> chars(128,0);
        for(int i=0; i<s.size(); i++)
        {
            if(isVowel(s[i]))
            {
                chars[(int)s[i]]++;
                s[i]='$';
            }
        }
        int start=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='$')
            {
                while(chars[start]==0) start++;

                s[i]=(char)start;
                chars[start]--;
            }
        }
        return s;       
    }
};
