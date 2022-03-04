#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        int start_index = 0;
        for(int i = 1; i <= nums.size(); i ++)
        {
            if(i == nums.size() || nums[i] != nums[i - 1] + 1)
            {
                if(start_index == i - 1)
                {
                    res.push_back(to_string(nums[start_index]));
                }else{
                    res.push_back(to_string(nums[start_index]) + "->" + to_string(nums[i-1]));
                }
                start_index = i;
            }
        }
        return res;
    }
};