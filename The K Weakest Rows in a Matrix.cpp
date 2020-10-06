#include <vector>
#include <array>


using namespace std;



class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k)
    {
        vector<int> res(k, 0);
        int rows = mat.size();
        int cols = mat[0].size();
        vector<array<int, 2>> v(rows); 
        for(int i = 0;i < rows;i++)
        {
            int c = 0;
            for(int j = 0; j < cols; j++)
            {
                c += mat[i][j];
            }
            v[i] = {c, i};
        }
        sort(v.begin(), v.end());
        for(int i = 0; i < k; i++)
        {
            res[i] = v[i][1];
        }
        return res;
    }
};