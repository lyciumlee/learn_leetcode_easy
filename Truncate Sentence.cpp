#include <bits/stdc++.h>


using namespace std;


class Solution {
public:
    string truncateSentence(string s, int k)
    {
        string res;
        int cnt = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == ' ' && (cnt+1) == k)
            {
                break;
            }
            res += s[i];
            if(s[i] == ' ')
            {
                cnt += 1;
            }
        }
        return res;
    }
};


