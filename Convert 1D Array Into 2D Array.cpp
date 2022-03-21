#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n)
    {
        vector<vector<int>> res;
        if(m*n != original.size()) return res;
        res.resize(m);
        for(int i = 0; i < m; i++)
        {
            res[i].resize(n, 0);
        }
        for(int i = 0; i < original.size(); i++)
        {
            int x = i / n;
            int y = i % n;
            res[x][y] = original[i];
        }
        return res;
    }
};