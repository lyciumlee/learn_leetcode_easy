#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int res = 0;
        int v = 0;
        for(int i = 1; i <= timeSeries.size(); i++)
        {
            if(i == timeSeries.size())
            {
                res += duration;
                return res;
            }else{
                v = timeSeries[i] - timeSeries[i - 1];
                if(v < duration)
                {
                    res += v;
                }else{
                    res += duration;
                }
            }
        }
        return res;
    }
};