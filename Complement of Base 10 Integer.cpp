




class Solution {
public:
    int bitwiseComplement(int N)
    {
        if(N == 0) return 1;
        int i = 0;
        int res = 0;
        int exp = 0;
        while(N)
        {
            if(!(N & 1))
            {
                res += (1 << exp);
            }
            N >>= 1;
            exp++;
        }
        return res;
    }
};