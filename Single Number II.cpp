#include <vector>

using namespace std;



class Solution {
public:
    int singleNumber(vector<int>& nums)
    {
        int a = 0, b = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            b = (b ^ nums[i]) & (~a);
            a = (a ^ nums[i]) & (~b);
        }
        return b;
    }
};