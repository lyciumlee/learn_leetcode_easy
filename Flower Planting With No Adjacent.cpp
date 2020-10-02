#include <vector>
#include <unordered_set>




using namespace std;




class Solution {
public:
    vector<int> gardenNoAdj(int N, vector<vector<int>>& paths)
    {
        vector<int> res(N, 0);
        vector<vector<int>> graph(N, vector<int>());
        for(auto& path: paths)
        {
            graph[path[0] - 1].push_back(path[1] - 1);
            graph[path[1] - 1].push_back(path[0] - 1);
        }
        for(int i=0; i<N; i++)
        {
            unordered_set<int> neighbor_col;
            for(int neighbor: graph[i])
            {
                neighbor_col.insert(res[neighbor]);
            }
            for(int color=1; color<5;color++)
            {
                if(neighbor_col.count(color))
                {
                    continue;
                }
                res[i] = color;
                break;
            }
        }
        return res;
    }
};