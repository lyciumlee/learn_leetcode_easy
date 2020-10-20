#include <vector>
#include <algorithm>


using namespace std;



class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target)
    {
        int closest = nums[0] + nums[1] + nums[2];
        int diff = abs(closest - target);
        sort(nums.begin(), nums.end());
        for(int i = 0; i < (int)nums.size() - 2; i++)
        {
            if(nums[i]*3 > target) return min(closest, nums[i] + nums[i+1] + nums[i+2]);
            int left = i + 1;
            int right = (int)nums.size() - 1;
            while(left < right)
            {
                int sum = nums[i] + nums[left] + nums[right];
                int newDiff = abs(sum - target);
                if(diff > newDiff)
                {
                    diff = newDiff;
                    closest = sum;
                }
                if(sum < target) ++left;
                else{
                    right--;
                }
            }
        }
        return closest;
    }
};