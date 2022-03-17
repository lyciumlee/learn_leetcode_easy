#include <bits/stdc++.h>


using namespace std;



class Solution {
public:
    int sumBase(int n, int k)
    {
        int res = 0;
        int temp = 0;
        int cnt = 1;
        while(n > 0)
        {
            int t = n % k;
            temp = (t * cnt) + temp;
            cnt *= 10;
            n /= k;
        }
        while(temp > 0)
        {
            res += (temp % 10);
            temp /= 10;
        }
        return res;
    }
};
