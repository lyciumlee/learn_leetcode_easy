#include <bits/stdc++.h>


using namespace std;


class Solution {
public:
    int findMiddleIndex(vector<int>& nums)
    {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int cur = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(cur == (sum - nums[i] - cur))
            {
                return i;
            }
            cur += nums[i];
        }
        return -1;
    }
};