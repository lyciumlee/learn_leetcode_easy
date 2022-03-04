#include <bits/stdc++.h>


using namespace std;


class Solution {
public:
    int getMaximumGenerated(int n)
    {
        if(n == 0)
        {
            return 0;
        }
        if(n == 1)
        {
            return 1;
        }
        int max = 1;     
        vector<int> res(n+1);
        res[0] = 0;
        res[1] = 1;
        int index = 1;
        while((index * 2) <= n)
        {
            int temp_one = index * 2;
            int temp_two = index * 2 + 1;
            if(temp_one <= n)
            {
                res[temp_one] = res[index];
                if(res[temp_one] > max)
                {
                    max = res[temp_one];
                }
            }
            if(temp_two <= n)
            {
                res[temp_two] = res[index] + res[index + 1];
                if(res[temp_two] > max)
                {
                    max = res[temp_two];
                }
            }
            index += 1;
        }
        return max;
    }
};


