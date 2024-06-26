class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<char> st;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ')') {
                if (!st.empty() && st.top() == '(') {
                    st.pop();
                } else if (st.empty()){
                    s[i] = '.';
                }
            } else if (s[i] == '(') {
                st.push(s[i]);
            }
        }

        for (int i = s.size()-1; i >= 0; i--) {
            if (!st.empty() && s[i] == '(') {
                s[i] = '.';
                st.pop();
            } else if (st.empty()) {
                break;
            }
        }

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '.') {
                s.erase(s.begin() + i);
                i--;
            }
        }

        return s;
    }
};
