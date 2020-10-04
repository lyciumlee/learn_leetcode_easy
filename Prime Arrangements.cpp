#include <math.h>


class Solution {
public:
    int numPrimeArrangements(int n)
    {
        const int mod = 1e9 + 7;
        int p = 0;
        for(int i = 1; i <= n; i++)
        {
            p += isPrime(i);
        }
        long res = 1;
        for(int i = 1; i <= p; i++)
        {
            res = (res * i) % mod;
        }
        for(int i = 1; i <= (n - p); i++)
        {
            res = (res * i) % mod;
        }
        return res;
    }
private:
    bool isPrime(int x)
    {
        if(x <= 1) return false;
        if(x == 2) return true;
        if(x == 3) return true;
        int cmp = sqrt(x);
        for(int i = 2; i <= cmp; i++)
        {
            if(x % i == 0) return false;
        }
        return true;
    }
};