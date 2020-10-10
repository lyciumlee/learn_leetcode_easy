#include <vector>




using namespace std;

class Solution {
public:
    int specialArray(vector<int>& nums)
    {
        const int n = nums.size();
        vector<int> f(n + 2, 0);
        for(int v: nums)
        {
            f[min(v, n)]++;
        }
        for(int i = n; i >= 0; i--)
        {
            if((f[i] += f[i+1]) == i) return i;
        }
        return -1;
    }
};