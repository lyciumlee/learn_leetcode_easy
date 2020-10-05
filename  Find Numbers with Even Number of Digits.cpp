#include <vector>


using namespace std;


class Solution {
public:
    int findNumbers(vector<int>& nums)
    {
        int res = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            int num = nums[i];
            int even_cnt = 0;
            while(num)
            {
                even_cnt++;
                num = num / 10;
            }
            if(even_cnt % 2 == 0) res++;
        }
        return res;
    }
};