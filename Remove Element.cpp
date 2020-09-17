#include <vector>
#include <algorithm>


using namespace std;


class Solution {
public:
    int removeElement(vector<int>& nums, int val)
    {
        return distance(nums.begin(), remove(nums.begin(), nums.end(), val));
    }
};