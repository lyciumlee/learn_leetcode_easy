#include <vector>
#include <algorithm>



using namespace std;

class Solution {
public:
    int rob(vector<int>& nums)
    {
        int lenth = nums.size();
        if(lenth == 0) return 0;
        if(lenth == 1) return nums[0];
        vector<int> dp = {nums[0], max(nums[0], nums[1])};
        for(int i=2; i< lenth; i++)
        {
            dp.push_back(max(nums[i] + dp[i-2], dp[i-1]));
        }
        return dp.back();
    }
};