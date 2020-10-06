#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;



class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums)
    {
        vector<int> count(101, 0);
        for(int x: nums) count[x]++;
        partial_sum(count.begin(), count.end(), count.begin());
        for(int &x: nums)
        {
            x = (x == 0) ? 0 : count[x - 1];
        }
        return nums;
    }
};