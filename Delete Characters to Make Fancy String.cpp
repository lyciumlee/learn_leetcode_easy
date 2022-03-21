#include <bits/stdc++.h>


using namespace std;


class Solution {
public:
    string makeFancyString(string s)
    {
        string res;
        for(int i=0; i<s.length();i++)
        {
            if(res.length() < 2)
            {
                res += s[i];
                continue;
            }
            int res_len = res.length();
            if(res[res_len - 1] == s[i] && res[res_len - 1] == res[res_len - 2])
            {
                continue;
            }
            res += s[i];
        }
        return res;
    }
};