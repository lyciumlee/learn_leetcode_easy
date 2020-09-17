#include <vector>




using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums)
    {
        int result = INT_MIN, f = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            f = max(f + nums[i], nums[i]);
            result = max(result, f);
        }
        return result;
    }
};
