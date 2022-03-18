#include <bits/stdc++.h>


using namespace std;


class Solution {
public:
    int countGoodSubstrings(string s)
    {
        int res = 0;
        int s_len = s.length();
        if(s_len < 3) return res;
        for(int i = 0; i < s_len - 2; i++)
        {
            if(s[i] == s[i + 1] || s[i] == s[i + 2] || s[i+1] == s[i + 2])
            {
                continue;
            }
            res++;
        }
        return res;
    }
};
