#include <vector>



using namespace std;


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target)
    {
        int start = firstGreaterEqual(nums, target);
        if(start == nums.size() || nums[start] != target) return {-1, -1};
        return {start, firstGreaterEqual(nums, target + 1) - 1};
    }
private:
    int firstGreaterEqual(vector<int>& nums, int target)
    {
        int left = 0, right = nums.size();
        while(left < right)
        {
            int mid = left + (right - left) / 2;
            if(nums[mid]< target) left = mid + 1;
            else right = mid;
        }
        return right;
    }
};