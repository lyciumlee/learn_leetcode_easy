#include <vector>




using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
        int res=0, vot = 0;
        for(int num: nums)
        {
            if(vot == 0)
            {
                res = num;
                vot++;
            }else{
                (num == res) ? (vot++) : (vot--);
            }

        }
        return res;
    }
};