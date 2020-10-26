#include <vector>
#include <climits>




using namespace std;



class Solution {
public:
    int minPathSum(vector<vector<int>>& grid)
    {
        if(grid.empty() || grid[0].empty()) return 0;
        for(int i = 0; i < grid.size(); i++)
        {
            for(int j = 0; j < grid[i].size(); j++)
            {
                if(i == 0 && j == 0) continue;
                int up = (i == 0) ? INT_MAX : grid[i - 1][j];
                int left = (j == 0) ? INT_MAX : grid[i][j - 1];
                grid[i][j] += min(up, left);
            }
        }
        return grid.back().back();
    }
};