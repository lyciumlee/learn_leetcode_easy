#include <bits/stdc++.h>



using namespace std;


class Solution {
public:
    int countPairs(vector<int>& nums, int k)
    {
        int res = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = i+1; j < nums.size(); j++)
            {
                if((nums[j] == nums[i]) && (((i*j) % k) == 0))
                {
                    res += 1;
                }
            }
        }
        return res;
    }
};
