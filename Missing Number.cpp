#include <vector>




using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums)
    {
        int res = 0;
        int numsLenth = nums.size();
        for(int i = 0; i < numsLenth; i++)
        {
            res ^= ((i+1) ^ nums[i]);
        }
        return res;
    }
};