#include <vector>



using namespace std;


class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time)
    {
        vector<int> c(60, 0);
        int res = 0;
        for(int t: time)
        {
            t %= 60;
            res += c[(60 - t) % 60];
            c[t]++;
        }
        return res;
    }
};