#include <stdint.h>


class Solution {
public:
    bool isPerfectSquare(int num)
    {
        int left = 0, right = num;
        int64_t mid;
        while(left <= right)
        {
            mid = left + (right - left) / 2;
            int64_t aim = mid*mid;
            if(aim == num) return true;
            if(aim < num)
            {
                left = mid + 1;
            }else{
                right = mid - 1;
            }
        }
        return false;
    }
};