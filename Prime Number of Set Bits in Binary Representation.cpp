



class Solution {
public:
    int countPrimeSetBits(int L, int R)
    {
        constexpr int magic = 665772;
        int res = 0;
        for(int n = L;n <= R;n++)
        {
            if(magic & (1 << __builtin_popcount(n))) res++;

        }
        return res;
    }
};