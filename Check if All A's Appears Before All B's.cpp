#include <bits/stdc++.h>


using namespace std;


class Solution {
public:
    bool checkString(string s)
    {
        bool res = true;
        bool has_b = false;
        for(auto &c: s)
        {
            if(has_b && c == 'a')
            {
                return false;
            }
            if(c == 'b')
            {
                has_b = true;
            }
        }
        return res;
        
    }
};
