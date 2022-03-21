#include <bits/stdc++.h>


using namespace std;


class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3)
    {
        vector<int> res;
        unordered_map<int, int> tables;
        for(auto& t: nums1)
        {
            tables[t] |= 1;
        }
        for(auto& t: nums2)
        {
            tables[t] |= 2;
        }
        for(auto& t: nums3)
        {
            tables[t] |= 4;
        }
        for(auto [s, v]: tables)
        {
            if(__builtin_popcount(v)>=2)
            {
                res.push_back(s);
            }
        }
        return res;
    }
};