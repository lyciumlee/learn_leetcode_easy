#include <bits/stdc++.h>


using namespace std;


class Solution {
public:
    int maxProductDifference(vector<int>& nums)
    {
        int64_t max_one = -1;
        int64_t max_two = -2;

        int64_t min_one = 0xfffffff;
        int64_t min_two = 0xfffffff;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] < min_one)
            {
                min_two = min_one;
                min_one = nums[i];
            }else if(nums[i] >= min_one && nums[i] < min_two)
            {
                min_two = nums[i];
            }

            if(nums[i] > max_one)
            {
                max_two = max_one;
                max_one = nums[i];
            }else if(nums[i] <= max_one && nums[i] > max_two)
            {
                max_two = nums[i];
            }
        }
        return (max_one*max_two)-(min_one * min_two);
    }
};
