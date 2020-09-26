



class Solution {
public:
    int hammingDistance(int x, int y)
    {
        int x_xor_y = x^y;
        int res = 0;
        for (int i = 0; i <32;i++)
        {
            if((x_xor_y >> i) & 1) res++;
        }
        return res;
    }
};