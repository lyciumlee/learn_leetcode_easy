#include <vector>
#include <algorithm>


using namespace std;



class Solution {
public:
    int dominantIndex(vector<int>& nums)
    {
        auto it1 = max_element(nums.begin(), nums.end());
        const int max1 = *it1;
        *it1 = -1;
        const int max2 = *max_element(nums.begin(), nums.end());
        return (max1 >= max2 * 2) ? distance(nums.begin(), it1) : -1;
    }
};