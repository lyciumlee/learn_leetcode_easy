#include <vector>
#include <algorithm>

using namespace std;


class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k)
    {
        const int n = grid.size();
        const int m = grid[0].size();
        k = m * n - k % (m * n);
        vector<int> g;
        for(int i = 0; i < n; i++)
        {
            g.insert(g.end(), grid[i].begin(), grid[i].end());

        }
        rotate(g.begin(), g.begin() + k, g.end());
        auto it = g.begin();
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                grid[i][j] = *it;
                it++;
            }
        }
        return grid;
    }
};