#include <string>
#include <limits.h>

using namespace std;



class Solution {
public:
    int myAtoi(string s)
    {
        long long res = 0;
        int neg = 0;
        int pos = 0;
        bool p = false;
        bool a = false;
        bool n = false;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == ' ')
            {
                if(n || neg || pos)
                {
                    break;
                }
            }
            else if(s[i] == '-')
            {
                if(n)
                {
                    break;
                }else{
                    neg++;
                }
            }
            else if(s[i] == '+')
            {
                if(n)
                {
                    break;
                }else{
                    pos++;
                }
            }
            else if(s[i] == '.')
            {
                p = true;
            }
            else if(s[i] >= '0' && s[i] <= '9' && !p && !a)
            {
                res = res * 10 + (s[i] - '0');
                n = true;
            }
            else{
                a = true;
            }
            if (res / 10 > INT_MAX) break;
        }

        if(neg) res = -res;
        if(res > INT_MAX) res = INT_MAX;
        if(res < INT_MIN) res = INT_MIN;
        if(pos + neg > 1) res = 0;
        return res;
    }
};