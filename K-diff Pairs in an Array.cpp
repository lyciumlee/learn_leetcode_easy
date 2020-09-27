#include <vector>
#include <unordered_map>


using namespace std;

class Solution {
public:
    int findPairs(vector<int>& nums, int k)
    {
        int res = 0, n = nums.size();
        unordered_map<int, int> m;
        for(int num: nums) ++m[num];
        for(auto it: m)
        {
            if(k == 0 && it.second > 1) res++;
            if(k > 0 && m.count(it.first + k)) res++; 
        }
        return res;
    }
};