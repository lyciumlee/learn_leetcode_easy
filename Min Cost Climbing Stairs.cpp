#include <vector>



using namespace std;



class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost)
    {
        int dp1 = 0;
        int dp2 = 0;
        for(int i = 2; i <= cost.size(); i++)
        {
            int dp = min(dp1 + cost[i - 1], dp2 + cost[i - 2]);
            dp2 = dp1;
            dp1 = dp;
        }
        return dp1;
    }
};