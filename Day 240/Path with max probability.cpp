class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        unordered_map<int, vector<pair<double, int>>> graph;
        int size = edges.size();
        priority_queue<pair<double, int>> maxProbNodeHeap;

        for(int indx = 0; indx < size; indx++) {
            double probab = succProb[indx];
            int firstNode = edges[indx][0];
            int secondNode = edges[indx][1];
            graph[firstNode].emplace_back(probab, secondNode);
            graph[secondNode].emplace_back(probab, firstNode);
        }

        vector<double> frmSrcProb(n, 0.0);
        frmSrcProb[start_node] = 1.0;
        maxProbNodeHeap.emplace(frmSrcProb[start_node], start_node);

        while(!maxProbNodeHeap.empty()) {
            auto [currProb, currNode] = maxProbNodeHeap.top();
            maxProbNodeHeap.pop();

            if(graph.find(currNode) == graph.end()) continue;

            for(auto& [neighProb, neighNode] : graph[currNode]) {
                double newProb = currProb * neighProb;
                if(newProb > frmSrcProb[neighNode]) {
                    frmSrcProb[neighNode] = newProb;
                    maxProbNodeHeap.emplace(newProb, neighNode);
                }
            }
        }

        return frmSrcProb[end_node];
    }
};
