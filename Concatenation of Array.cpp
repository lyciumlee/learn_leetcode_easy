#include <bits/stdc++.h>


using namespace std;


class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums)
    {
        int nums_lenth = nums.size();
        vector<int> res(nums_lenth*2, 0);
        for(int i = 0; i < nums_lenth; i++)
        {
            int r = nums[i];
            res[i] = r;
            res[i+nums_lenth] = r;
        }
        return res;
    }
};