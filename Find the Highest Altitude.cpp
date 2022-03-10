#include <bits/stdc++.h>


using namespace std;


class Solution {
public:
    int largestAltitude(vector<int>& gain)
    {
        int res = 0;
        int max = 0;
        for(auto &item : gain)
        {
            res += item;
            if(res > max)
            {
                max = res;
            }
        }
        return max;
    }
};


