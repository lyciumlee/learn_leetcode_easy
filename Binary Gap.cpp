#include <algorithm>

using namespace std;


class Solution {
public:
    int binaryGap(int n)
    {
        int l = -1;
        int res = 0;
        for(int i = 0; i < 31; i++)
        {
            if(n & (1 << i)) 
            {
                if(l >= 0)
                {
                    res = max(res, i - l);
                }
                l = i;
            }
        }
        return res;
    }
};