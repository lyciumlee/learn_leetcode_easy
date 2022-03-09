#include <bits/stdc++.h>


using namespace std;


class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts)
    {
        int max_wealth = 0;
        for(int i = 0; i < accounts.size(); i++)
        {
            int this_wealth = accumulate(accounts[i].begin(), accounts[i].end(), 0);
            if(this_wealth > max_wealth)
            {
                max_wealth = this_wealth;
            }
        }
        return max_wealth;
    }
};

