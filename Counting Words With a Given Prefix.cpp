#include <bits/stdc++.h>



using namespace std;


class Solution {
public:
    int prefixCount(vector<string>& words, string pref)
    {
        int res = 0;
        for(auto& one: words)
        {
            bool sign = true;
            for(int i = 0; i < pref.size(); i++)
            {
                if(pref[i] != one[i])
                {
                    sign = false;
                    break;
                }
            }
            if(sign)
            {
                res += 1;
            }
        }
        return res;
        
    }
};
