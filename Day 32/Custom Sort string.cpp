class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char, int> inDegrees;
        unordered_map<char, int> chars;
        unordered_map<char, char> graph;
        for (auto c : s) {
            chars[c]++;
            inDegrees[c] = 0;
        }
        for (int i = 0; i < order.length() - 1; i++) {
            char p = order[i], c = order[i + 1];
            graph[p] = c;
            inDegrees[c]++;
        }
        queue<char> sources;
        for (auto entry : inDegrees) {
            if (entry.second == 0) {
                sources.push(entry.first);
            }
        }
        string res = "";
        while (!sources.empty()) {
            auto front = sources.front();
            sources.pop();
            if (chars.find(front) != chars.end()) {
                for (int i = 0; i < chars[front]; i++) {
                    res += front;
                }
            }
            inDegrees[graph[front]]--;
            if (inDegrees[graph[front]] == 0) {
                sources.push(graph[front]);
            }
        }
        if (res.length() == s.length()) return res;
        return "";
    }
};
