#include <bits/stdc++.h>


using namespace std;


class Solution {
public:
    vector<string> cellsInRange(string s)
    {
        vector<string> res;
        int x1 = s[0] - 'A' + 1;
        int y1 = s[1] - '1' + 1;

        int x2 = s[3] - 'A' + 1;
        int y2 = s[4] - '1' + 1;
        for(int x = x1; x <= x2; x++)
        {
            for(int y = y1; y <= y2; y++)
            {
                string t(2, 0);
                t[0] = 'A' - 1 + x;
                t[1] = '1' - 1 + y;
                res.push_back(t);
            }
        }
        return res;
    }
};
