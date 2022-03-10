#include <bits/stdc++.h>


using namespace std;


class Solution {
public:
    int sumOfUnique(vector<int>& nums)
    {
        int res = 0;
        unordered_map<int, int> counts;
        for(auto& item: nums)
        {
            counts[item] += 1;
        }
        for(auto& item: nums)
        {
            if(counts[item] == 1)
            {
                res += item;
            }
        }
        return res;
    }
};

