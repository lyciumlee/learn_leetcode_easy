class Solution {
public:
    int reverse(int x)
    {
        int64_t x_abs = x;
        x_abs = x_abs > 0 ? x_abs : -x_abs;
        int64_t out = 0;
        for(;x_abs; x_abs /= 10)
        {
            out = out * 10 + x_abs % 10;
        }
        if(out > 2147483647 || ((x<0) &&  out> 2147483648))
        {
            return 0;
        }
        if(x > 0)
        {
            return out;
        }else {
            return -out;
        }
    }
};