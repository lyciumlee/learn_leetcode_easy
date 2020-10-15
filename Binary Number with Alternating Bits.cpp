


class Solution {
public:
    bool hasAlternatingBits(int n)
    {
        int r = n & 1;
        while((n >>= 1) > 0)
        {
            int t = n & 1;
            if(t == r) return false;
            r = t;
        }
        return true;
    }
};