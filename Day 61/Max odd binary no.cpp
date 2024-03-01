class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        string res="";
        int ones=count(begin(s),end(s),'1');
        int zeroes=s.size()-ones;
        while(ones-->1)
        {
            res+="1";
        }
        while(zeroes--)
        {
            res+="0";
        }
        res+="1";
        return res;
        
    }
};
