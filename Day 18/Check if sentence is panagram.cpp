class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> st{};

        for(auto x:sentence){
            st.insert(x);
        }

        if(st.size()==26) return true;
        else return false;
    }
};
