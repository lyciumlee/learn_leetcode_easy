#include <bits/stdc++.h>


using namespace std;

class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix)
    {
        int n = matrix.size();
        vector<int> aim(n, 0);
        for(int i = 1; i <= n; ++i)
        {
            aim[i-1] = 1;
        }
        for(int i = 0; i < n; ++i)
        {
            vector<int> cc(n, 0);
            vector<int> rr(n, 0);

            for(int j = 0; j < n; ++j)
            {
                rr[matrix[i][j]-1] += 1;
                cc[matrix[j][i]-1] += 1;
            }
            if(rr != aim || cc != aim)
            {
                return false;
            }
        }
        return true;
    }
};
