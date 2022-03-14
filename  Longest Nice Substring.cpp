#include <bits/stdc++.h>


using namespace std;


class Solution {
public:
    string longestNiceSubstring(string s)
    {
        const int s_len = s.length();
        string res="";
        for(int i = 0; i < s_len;i++)
        {
            vector<int> u(26), l(26);
            for(int j = i; j<s_len;j++)
            {
                char temp = s[j];
                if(isupper(temp))
                {
                    u[temp - 'A'] = 1;
                }else{
                    l[temp - 'a'] = 1;
                }
                if((u == l) && (j - i + 1) > res.length())
                {
                    res = s.substr(i, j - i + 1);
                }
            }
        }
        return res;
    }
};