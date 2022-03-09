#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    int numberOfMatches(int n)
    {
        int res = 0;
        int r = 0;
        while(n != 1)
        {
            
            if(n & 1)
            {
                r = (n - 1) / 2;
                res += r;
                n = r + 1;
            }else{
                r = n / 2;
                res += r;
                n = r;
            }
        }
        return res;
    }
};



class Solution {
public:
    int numberOfMatches(int n)
    {
        return n-1;
    }
};
