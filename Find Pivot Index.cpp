#include <vector>
#include <algorithm>
#include <numeric>


using namespace std;



class Solution {
public:
    int pivotIndex(vector<int>& nums)
    {
        const int sum = accumulate(nums.begin(), nums.end(), 0);
        int l = 0;
        int r = sum;
        for(int i = 0; i < nums.size(); i++)
        {
            r -= nums[i];
            if(l == r) return i;
            l += nums[i];
        }
        return -1;
    }
};