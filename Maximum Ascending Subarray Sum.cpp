#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    int maxAscendingSum(vector<int>& nums)
    {
        int ans = 0;
        int nums_l = nums.size();
        // if(nums_l == 1) return nums[0];
        for(int i = 0, s = 0; i < nums_l; i++)
        {
            if(i && nums[i] <= nums[i - 1])
            {
                s = 0;
            }
            ans = max(ans, s += nums[i]);
        }
        return ans;
    }
};