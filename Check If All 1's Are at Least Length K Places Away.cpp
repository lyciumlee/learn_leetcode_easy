#include <bits/stdc++.h>
#include <stdint.h>

using namespace std;




class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        const int64_t maxrange = 0xffffffff;
        int64_t last_one_bit_index = 0xffffffff;
        for(int i = 0; i < nums.size(); i ++){
            if((nums[i] == 1) && (last_one_bit_index == maxrange))
            {
                last_one_bit_index = i;
                continue;
            }
            if(nums[i] == 1)
            {
                if((i - last_one_bit_index - 1) >= k)
                {
                    last_one_bit_index = i;
                }else{
                    return false;
                }
            }
        }
        return true;
    }
};



