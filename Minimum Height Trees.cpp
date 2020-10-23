#include <vector>
#include <string>
#include <cmath>
#include <climits>
#include <map>
#include <unordered_map>
#include <unordered_set>




using namespace std;

class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>> &edges) {
        if (n == 1)
            return vector<int>{0};
        unordered_map<int, unordered_set<int>> adj;
        for (auto edge : edges) {
            adj[edge[0]].insert(edge[1]);
            adj[edge[1]].insert(edge[0]);
        }
        vector<int> leaves;
        for (auto item : adj) {
            if (item.second.size() == 1)
                leaves.push_back(item.first);
        }
        while (n > 2) {
            n -= leaves.size();
            vector<int> newLeaves;
            for (auto leaf : leaves) {
                int nextNode = *adj[leaf].begin();
                adj[leaf].erase(nextNode);
                adj[nextNode].erase(leaf);
                if (adj[nextNode].size() == 1)
                    newLeaves.push_back(nextNode);
            }
            leaves = newLeaves;
        }
        return leaves;
    }
};