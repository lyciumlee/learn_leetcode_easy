#include <bits/stdc++.h>


using namespace std;



class Solution {
public:
    int mostFrequent(vector<int>& nums, int key)
    {
        int res = 0;
        int res_f = 0;
        unordered_map<int, int> t;
        for(int i = 0; i < nums.size() - 1; i++)
        {
            if(nums[i] == key)
            {
                t[nums[i+1]]+=1;
            }
        }
        for(auto& this_pair: t)
        {
            if(this_pair.second > res_f)
            {
                res = this_pair.first;
                res_f = this_pair.second;
            }
        }
        return res;        
    }
};
