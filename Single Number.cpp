#include <vector>
#include <stdint.h>


using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums)
    {
        uint64_t res = 0;
        for(auto i: nums)
        {
            res ^= i;
        }
        return res;
    }
};