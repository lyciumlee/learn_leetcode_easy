#include <vector>



using namespace std;


class Solution {
public:
    int numSpecial(vector<vector<int>>& mat)
    {
        const int rows = mat.size();
        const int cols = mat[0].size();
        vector<int> rs(rows);
        vector<int> cs(cols);
        for(int r = 0; r < rows; r++)
        {
            for(int c = 0; c < cols; c++)
            {
                rs[r] += mat[r][c];
                cs[c] += mat[r][c];
            }
        }
        int res = 0;
        for(int r = 0; r < rows; r++)
        {
            for(int c = 0; c < cols; c++)
            {
                res += mat[r][c] && rs[r] == 1 && cs[c] == 1;
            }
        }
        return res;
    }
};