#include <vector>
#include <limits.h>


using namespace std;



class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums)
    {
        int res = 0;
        int cnt = 0;
        int cur = INT_MAX;
        for(int num: nums)
        {
            if(num > cur) ++cnt;
            else cnt = 1;
            res = max(res, cnt);
            cur = num;
        }
        return res;
    }
};