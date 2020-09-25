#include <vector>
#include <stdint.h>
#include <limits.h>



using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums)
    {
        long first = LONG_MIN, second = LONG_MIN, third = LONG_MIN;
        for(int n : nums)
        {
            if(n > first)
            {
                third = second;
                second = first;
                first = n;
            }
            else if(n>second && n < first)
            {
                third = second;
                second = n;
            }
            else if(n > third && n < second)
            {
                third = n;
            }
        }
        int nLenth = nums.size();
        if(nLenth <= 2) return first;
        if(second == LONG_MIN) return first;
        if(third == LONG_MIN) return first;
        return third;
    }
};