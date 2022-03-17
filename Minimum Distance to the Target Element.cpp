#include <bits/stdc++.h>


using namespace std;

class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start)
    {
        int min_dis = 0xffffff;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == target)
            {
                if(abs(i - start) < min_dis)
                {
                    min_dis = abs(i - start);
                }
            }
        }
        return min_dis;
    }
};
