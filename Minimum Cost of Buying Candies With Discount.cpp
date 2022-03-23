#include <bits/stdc++.h>



using namespace std;



class Solution {
public:
    int minimumCost(vector<int>& cost)
    {
        sort(cost.begin(), cost.end());
        int res = 0;
        int p = cost.size() - 1;
        int cnt = 0;
        while(p > -1)
        {
            if(cnt == 2)
            {
                p--;
                cnt = 0;
            }else{
                res += cost[p];
                cnt++;
                p--;
            }
        }
        return res;
    }
};

