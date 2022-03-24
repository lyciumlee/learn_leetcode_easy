#include <bits/stdc++.h>


using namespace std;


class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k)
    {
        unordered_set<int> s;
        for(int i = 0; i < nums.size();i++)
        {
            if(nums[i] == key)
            {
                for(int j = i - k; j <=i+k;j++)
                {
                    if(j<0)
                    {
                        continue;
                    }else if(j >= nums.size())
                    {
                        continue;
                    }
                    s.insert(j);
                }
            }

        }
        vector<int> res(s.begin(),s.end());
        sort(res.begin(),res.end());
        return res;
    }
};
