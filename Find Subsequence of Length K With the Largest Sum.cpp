#include <bits/stdc++.h>


using namespace std;


class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k)
    {
        vector<int> res;
        vector<int> nums_s(nums);
        int nn = nums.size();
        sort(nums_s.begin(), nums_s.end());
        unordered_map<int, int> t;
        for(int i = 0; i < k; i++)
        {
            t[nums_s[nn - 1 - i]]++;
        }
        for(auto &one: nums)
        {
            if(t[one] > 0)
            {
                res.push_back(one);
                t[one]--;
            }
        }
        return res;
    }
};