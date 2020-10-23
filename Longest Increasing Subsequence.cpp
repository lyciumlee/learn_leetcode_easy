#include <vector>

using namespace std;


class Solution {
public:
    int lengthOfLIS(vector<int>& nums)
    {
        vector<int> v;
        for(auto a: nums)
        {
            auto it = lower_bound(v.begin(), v.end(), a);
            if(it == v.end()) v.push_back(a);
            else *it = a;
        }
        return v.size();
    }
};