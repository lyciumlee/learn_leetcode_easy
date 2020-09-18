
#include <vector>
#include <algorithm>


using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        if(prices.size() < 2) return 0;
        int profit = 0;
        int curMin = prices[0];
        for(int i = 1; i < prices.size(); i++)
        {
            profit =  max(profit, prices[i] - curMin);
            curMin =  min(curMin, prices[i]);
        }
        return profit;
    }
};