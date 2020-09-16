#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        return distance(nums.begin(), unique(nums.begin(), nums.end()));
    }
};