class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange)
    {
        int res = numBottles;
        int empty = numBottles;
        while(empty >= numExchange)
        {
            int exchange = empty/numExchange;
            empty -= exchange*numExchange;
            empty += exchange;
            res += exchange;
        }
        return res;
    }
};