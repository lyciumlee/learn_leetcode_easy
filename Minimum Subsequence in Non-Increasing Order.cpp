#include <vector>
#include <algorithm>
#include <numeric>


using namespace std;




class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums)
    {
        sort(nums.rbegin(), nums.rend());
        int numsSum = accumulate(nums.begin(), nums.end(), 0);
        vector<int> res;
        int sum = 0;
        for(int v: nums)
        {
            sum += v;
            res.push_back(v);
            if(sum > numsSum / 2) break;
        }
        return res;
    }
};