#include <vector>



using namespace std;


class Solution {
public:
    int countPrimes(int n)
    {
        vector<bool> table(n, true);
        int res = 0;
        for(int i = 2; i < n; i++)
        {
            if(!table[i]) continue;
            res++;
            for(int j = 2; j*i < n; j++)
            {
                table[j * i] = false;
            }
        }
        return res;
    }
};