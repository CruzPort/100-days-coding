class Solution {
public:
    int minimizedStringLength(string s) {
        int i=0;
        int count[26]={0};
        for(int i=0;i<s.length();i++){
            int number = s[i]-'a';
            count[number]++;
        }

        for(int j=0;j<26;j++){
            if(count[j]!=0){
                i++;
            }
        }
return i;
    }
};
