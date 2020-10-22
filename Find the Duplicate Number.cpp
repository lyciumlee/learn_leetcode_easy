#include <vector>


using namespace std;


class Solution {
public:
    int findDuplicate(vector<int>& nums)
    {
        int res = 0, n = nums.size();
        for(int i = 0; i < 32; i++)
        {
            int bit = (1 << i), cnt1 = 0, cnt2 = 0;
            for(int k = 0; k < n; k++)
            {
                if((k & bit) > 0) ++cnt1;
                if((nums[k] & bit) > 0) ++cnt2;
            }
            if(cnt2 > cnt1) res += bit;
        }
        return res;
    }
};