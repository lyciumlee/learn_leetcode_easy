#include <vector>

using namespace std;



class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites)
    {
        graph_ = vector<vector<int>>(numCourses);
        for(const auto &p: prerequisites)
        {
            graph_[p[0]].push_back(p[1]);
        }
        vector<int> v(numCourses, 0);
        for(int i = 0; i < numCourses; i++)
        {
            if(dfs(i, v)) return false;
        }
        return true;
    }
private:
    vector<vector<int>> graph_;
    bool dfs(int cur, vector<int> & v)
    {
        if(v[cur] == 1) return true;
        if(v[cur] == 2) return false;
        v[cur] = 1;
        for(const int t: graph_[cur])
        {
            if(dfs(t, v)) return true;
        }
        v[cur] = 2;
        return false;
    }
};