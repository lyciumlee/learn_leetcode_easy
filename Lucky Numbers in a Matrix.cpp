#include <vector>
#include <limits.h>


using namespace std;

class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix)
    {
        const int m = matrix.size();
        const int n = matrix[0].size();
        vector<int> rows(m, INT_MAX);
        vector<int> cols(n, INT_MIN);
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                rows[i] = min(rows[i], matrix[i][j]);
                cols[j] = max(cols[j], matrix[i][j]);
            }
        }
        vector<int> res;
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(matrix[i][j] == rows[i] && matrix[i][j] == cols[j])
                {
                    res.push_back(matrix[i][j]);
                }
            }
        }
        return res;
    }
};




