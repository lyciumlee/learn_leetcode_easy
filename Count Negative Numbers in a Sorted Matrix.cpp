#include <vector>



using namespace std;



class Solution {
public:
    int countNegatives(vector<vector<int>>& grid)
    {
        int ans = 0;
        int m = grid.size();
        int n = grid[0].size();
        int r = m - 1;
        int c = 0;
        while(r >= 0 && c < n)
        {
            if(grid[r][c] < 0)
            {
                ans += n - c;
                r--;
            }
            else{
                c++;
            }

        }
        return ans;
    }
};