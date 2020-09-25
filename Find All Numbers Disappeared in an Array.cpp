#include <vector>




using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums)
    {
        vector<int> res;
        int numsLenth = nums.size();
        for(int i = 0; i < numsLenth; i++)
        {
            int idx = abs(nums[i]) - 1;
            nums[idx] = (nums[idx] > 0) ? (-nums[idx]) : nums[idx];

        }
        for(int i = 0; i < numsLenth; i++)
        {
            if(nums[i] > 0) res.push_back(i+1);
        }
        return res;
    }
};