#include <bits/stdc++.h>


using namespace std;

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original)
    {
        int res = original;
        unordered_map<int, int> t;
        for(auto& one: nums)
        {
            t[one] = 1;
        }
        while(t[res] == 1)
        {
            res = res << 1;
        }
        return res;
    }
};