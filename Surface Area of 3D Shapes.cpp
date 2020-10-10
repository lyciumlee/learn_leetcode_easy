#include <vector>

using namespace std;


class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid)
    {
        int m = grid.size();
        int n = grid[0].size();
        int res = 0;
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                int h = grid[i][j];
                if(h == 0) continue;
                res += 2 + 4 * h;
                if(i) res -= 2 * min(h, grid[i - 1][j]);
                if(j) res -= 2 * min(h, grid[i][j - 1]);
            }
        }
        return res;
    }
};