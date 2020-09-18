#include <vector>
#include <stdint.h>



using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int64_t sum = 0;
        int64_t lenth = prices.size();
        for (int i = 1; i < lenth; i++)
        {
            int64_t diff = prices[i] - prices[i - 1];
            if(diff > 0) sum += diff;
        }
        return sum;
    }
};