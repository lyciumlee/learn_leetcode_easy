#include <bits/stdc++.h>


using namespace std;


class Solution {
public:
    int minimumSum(int num)
    {
        int res = 0;
        vector<int> t(4, 0);
        for(int i = 0; i < 4; i++)
        {
            t[i] = num % 10;
            num = num / 10;
        }
        sort(t.begin(), t.end());
        res = min(t[0] * 10 + t[3] + t[1] * 10 + t[2], t[0] * 10 + t[2] + t[1] * 10 + t[3]);
        return res;
    }
};
