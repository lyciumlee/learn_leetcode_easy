#include <bits/stdc++.h>



using namespace std;


class Solution {
public:
    int countKDifference(vector<int>& nums, int k)
    {
        int res = 0;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = i+1; j < nums.size(); j++)
            {
                int diff = nums[j] - nums[i];
                if((diff) == k)
                {
                    res += 1;
                }
                else if((diff) > k)
                {
                    break;
                }
            }
        }
        return res;
    }
};
