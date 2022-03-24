#include <bits/stdc++.h>


using namespace std;



class Solution {
public:
    int countEven(int num)
    {
        if(num < 10)
        {
            return num / 2;
        }
        int res = 0;
        int up_count = (num - num % 10) / 2;
        res += up_count - 1;   
        for(int i = (num - num % 10); i <= num; i++)
        {
            int t = 0;
            int ii = i;
            while(ii > 0)
            {
                t += (ii % 10);
                ii /= 10;
            }
            if((t & 1) == 0)
            {
                res += 1;
            }
        } 
        return res;
    }
};