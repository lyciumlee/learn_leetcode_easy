#include <bits/stdc++.h>


using namespace std;



class Solution {
public:
    bool divideArray(vector<int>& nums)
    {
        unordered_map<int, int> t;
        for(int i=0; i<nums.size(); i++)
        {
            t[nums[i]] += 1;
        }
        for(auto& this_pair : t)
        {
            if(this_pair.second & 1)
            {
                return false;
            }
        }
        return true;
    }
};