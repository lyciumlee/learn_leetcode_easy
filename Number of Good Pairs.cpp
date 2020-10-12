#include <vector>


using namespace std;


class Solution {
public:
    int numIdenticalPairs(vector<int>& nums)
    {
        int res = 0;
        vector<int> f(101);
        for(int i = 0; i < nums.size(); i++)
        {
            res += f[nums[i]]++;
        }
        return res;
    }
};