#include <bits/stdc++.h>



using namespace std;


class Solution {
public:
    int countHillValley(vector<int>& nums)
    {
        int res = 0;
        int left = nums[0];
        for(int i = 1; i+1 < nums.size();i++)
        {
            if((left > nums[i] && nums[i] < nums[i+1]) || 
               (left < nums[i] && nums[i] > nums[i+1])
              )
            {
                res +=1;
                left = nums[i];
            }
        }
        return res;
    }
};