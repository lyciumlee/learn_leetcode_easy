#include <cstdint>

using namespace std;

class Solution {
public:
    int uniquePaths(int m, int n)
    {
        int64_t num = 1, demon = 1;
        int64_t small = m > n ? n : m;
        for(int64_t i = 1; i <= small - 1; i++)
        {
            num *= (m + n - 1 - i);
            demon *= i;
        }
        return (int)(num / demon);
    }
};