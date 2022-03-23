#include <bits/stdc++.h>



using namespace std;


class Solution {
public:
    string firstPalindrome(vector<string>& words)
    {
        for(auto &one: words)
        {
            int one_s = one.size();
            int one_s_h = one_s  >> 1;
            int sign = true;
            for(int i = 0; i < one_s_h; i++)
            {
                if(one[i] != one[one_s - 1 -i])
                {
                    sign = false;
                    break;
                }
            }
            if(sign)
            {
                return one;
            }
        }
        return "";
    }
};
