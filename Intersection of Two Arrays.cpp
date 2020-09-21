#include <vector>
#include <set>
#include <unordered_map>




using namespace std;


class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2)
    {
        unordered_map<int, int> mp;
        vector<int> res;
        for(int a: nums1) mp[a]++;
        for(int b: nums2)
        {
            if(mp[b]-- > 0)
            {
                res.push_back(b);
            }
        }
        return res;
    }
};