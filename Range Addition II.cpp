#include <vector>


using namespace std;



class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops)
    {
        for(const auto & range: ops)
        {
            m = min(m, range[0]);
            n = min(n, range[1]);
        }
        return m * n;
    }
};

