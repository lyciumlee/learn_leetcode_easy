#include <bits/stdc++.h>


using namespace std;


class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters)
    {
        istringstream is(text);
        unordered_map<char, int> tables;
        for(int i = 0; i < brokenLetters.length(); i++)
        {
            tables[brokenLetters[i]] = 1;
        }
        int res = 0;
        string temp;
        int sign = 0;
        while(is >> temp)
        {
            sign = 0;
            for(auto& one: temp)
            {
                if(tables[one] == 1)
                {
                    sign = 1;
                    break;
                }
            }
            if(sign == 1)
            {
                continue;
            }
            res += 1;
        }
        return res;
    }
};

