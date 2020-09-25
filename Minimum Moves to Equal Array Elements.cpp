#include <vector>
#include <limits.h>
#include <algorithm>


using namespace std;

class Solution {
public:
    int minMoves(vector<int>& nums)
    {
        int mn = INT_MAX;
        int res = 0;
        for(int n: nums) mn = min(mn, n);
        for(int n: nums) res += (n - mn);
        return res;
    }
};