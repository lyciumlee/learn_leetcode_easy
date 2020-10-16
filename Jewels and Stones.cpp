#include <string>

#include <vector>

using namespace std;


class Solution {
public:
    int numJewelsInStones(string J, string S)
    {
        vector<int> f(128, 0);
        int res = 0;
        for(const char j: J)
        {
            f[j] = 1;
        }
        for(const char s: S)
        {
            res += f[s] & 1;
        }
        return res;
    }
};