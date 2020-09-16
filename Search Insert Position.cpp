#include <vector>
#include <stdint.h>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target)
    {
        int64_t len = nums.size();
        if(len == 1)
        {
            if(nums[0] >= target)
            {
                return 0;
            } else{
                return 1;
            }
        }
        int64_t low,high,mid;
        low = 0;
        high = len - 1;
        mid = (low + high) / 2;
        while(low < high)
        {
            if(nums[mid] > target)
            {
                high = mid - 1;
            }else if(nums[mid] < target)
            {
                low = mid + 1;
            } else if(nums[mid] == target){
                break;
            }
            mid = (low + high) / 2;
        }
        if(nums[mid] == target)
        {
            if(mid == 0)
            {
                return 0;
            }
            while(nums[mid] == target)
            {
                mid--;
            }
            return mid+1;
        }
        else if(nums[mid] > target)
        {
            return mid;
        } else if(nums[mid] < target)
        {
            return mid+1;
        }
        return 0;
    }
};