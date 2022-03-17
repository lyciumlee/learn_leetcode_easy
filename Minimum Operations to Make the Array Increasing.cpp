#include <bits/stdc++.h>


using namespace std;


class Solution {
public:
    int minOperations(vector<int>& nums)
    {
        int res = 0;
        int last_increaseing_num = nums[0];
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] > last_increaseing_num)
            {
                last_increaseing_num = nums[i];
                continue;
            }
            res += last_increaseing_num + 1 - nums[i];
            last_increaseing_num+=1;
        }
        return res;
    }
};
