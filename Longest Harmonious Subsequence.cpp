#include <vector>
#include <unordered_map>


using namespace std;



class Solution {
public:
    int findLHS(vector<int>& nums)
    {
        unordered_map<int, int> counts;
        int res = 0;
        for(int num: nums)
        {
            counts[num]++;
            int l = counts[num - 1];
            int h = counts[num + 1];
            if(l || h)
            {
                res = max(res, counts[num] + max(l, h));

            }
        }
        return res;
    }
};