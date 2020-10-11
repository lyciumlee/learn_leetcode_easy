#include <vector>


using namespace std;


class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n)
    {
        vector<int> res(2 * n);
        for(int i = 0; i < 2* n;i++)
        {
            res[i] = nums[i / 2 + n * (i % 2)];
        }
        return res;
    }   
};