#include <bits/stdc++.h>



using namespace std;



class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words)
    {
        int res = 0;
        unordered_map<char, int> permit_chars;
        for(auto &item: allowed)
        {
            permit_chars[item] = 1;
        }
        int sign = 1;
        for(auto &one_str: words)
        {
            sign = 1;
            for(auto &one_char: one_str)
            {
                if(permit_chars[one_char] != 1)
                {
                    sign = 0;
                    break;
                }
            }
            if(sign == 1)
            {
                res += 1;
            }

        }
        return res;
    }
};