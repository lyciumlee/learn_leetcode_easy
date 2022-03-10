#include <bits/stdc++.h>



using namespace std;


class Solution {
public:
    int totalMoney(int n)
    {
        int res = 0;
        int q = n / 7;
        int r = n % 7;
        int num_group = 0;
        int append = 0;
        if(r == 0)
        {
            num_group = q;
            append = 0;
        }else{
            num_group += q + 1;
            append = 7 - r;
        }
        res = (28 + 28 + 7 * (num_group - 1)) * (num_group) / 2;
        int last_end = 7 + (num_group - 1);
        for(int i = append; i > 0; i--)
        {
            res -= last_end;
            last_end -= 1;
        }
        return res;
    }
};