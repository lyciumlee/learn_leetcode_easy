#include <bits/stdc++.h>



using namespace std;


class Solution {
public:
    int maxDistance(vector<int>& colors)
    {
        int res = 0;
        int n = colors.size();
        for(int i = 0; i < n; i++)
        {
            res = max(res, i * (colors[0] != colors[i]));
            res = max(res, (n - 1 - i) * (colors[i] != colors[n - 1]));
            // res = max(res, i * (colors[0] != colors[i]), (n - 1 - i) * (colors[i] != colors[n - 1]));
        }
        return res;
    }
};