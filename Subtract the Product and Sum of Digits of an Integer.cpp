class Solution {
public:
    int subtractProductAndSum(int n)
    {
        int p = 1, s = 0;
        while(n)
        {
            const int d = n % 10;
            p *= d;
            s += d;
            n /= 10;
        }
        return p - s;
    }
};