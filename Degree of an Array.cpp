#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;



class Solution {
public:
    int findShortestSubArray(vector<int>& nums)
    {
        unordered_map<int, vector<int>> indices;
        for(int i = 0; i < nums.size(); i++)
        {
            indices[nums[i]].push_back(i);
        }
        int degree = 0;
        for(const auto &p: indices)
        {
            degree = max(degree, (int)p.second.size());
        }
        int res = nums.size();
        for(const auto &p: indices)
        {
            if(p.second.size() != degree) continue;
            res = min(res, p.second.back() - p.second.front() + 1);
        }
        return res;
    }
};