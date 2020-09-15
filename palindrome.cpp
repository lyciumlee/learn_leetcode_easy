class Solution {
public:
    bool isPalindrome(int x)
    {
        int64_t x_64 = x;
        if(x < 0)
        {
            return false;
        }
        int64_t d = 1;
        while(x / 10 >= d)
        {
            d *= 10;
        }
        int64_t q,r;
        while(x_64 > 0)
        {
            q = x_64 / d;
            r = x_64 % 10;
            if(q != r)
            {
                return false;
            }
            x_64 = x_64 % d /10;
            d /= 100;
        }
        return true;
    }
};