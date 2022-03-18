#include <bits/stdc++.h>

using namespace std;



class Solution {
public:
    // x0,0 x0,1 x0,2 ... x0,j
    // x1,0 x1,1 x1,2 ... x1,j
    // ...  ...  ...  ... ...
    // xi,0 xi,1 xi,2 ... xi,j
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target)
    {
        if(mat == target) return true;
        for(int i = 0; i < 3; i++)
        {
            vector<vector<int>> temp(mat);
            rotate(mat, temp);
            if(temp == target) return true;
            mat = temp;
        }
        return false;
    }

    void rotate(vector<vector<int>>& mat, vector<vector<int>>& out)
    {
        int n = mat.size();
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                out[j][n - i - 1] = mat[i][j];
            }
        }
    }
};
