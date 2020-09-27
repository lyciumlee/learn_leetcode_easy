#include <vector>
#include <algorithm>


using namespace std;



class Solution {
public:
    int arrayPairSum(vector<int>& nums)
    {
        int res = 0;
        int numsLenth = nums.size();
        sort(nums.begin(), nums.end());
        for(int i = 0; i < numsLenth; i = i+2)
        {
            res += nums[i];
        }
        return res;
    }
};