#include <bits/stdc++.h>


using namespace std;



class Solution {
public:
    bool isPrefixString(string s, vector<string>& words)
    {
        int pp = 0;
        for(auto &one : words)
        {
            if(pp == s.length()) return true;
            for(int i = 0; i < one.size(); ++i)
            {
                if(s[pp] != one[i]) return false;
                pp++;
            }
        }
        if(pp == s.length()) return true;
        return false;

        
    }
};