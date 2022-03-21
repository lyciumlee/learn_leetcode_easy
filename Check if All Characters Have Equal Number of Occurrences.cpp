#include<bits/stdc++.h>


using namespace std;


class Solution {
public:
    bool areOccurrencesEqual(string s)
    {
        unordered_map<char, int> tables;
        for(int i = 0; i < s.size(); i++)
        {
            tables[s[i]] += 1;
        }
        int countone = tables[s[0]];
        for(auto &this_pair : tables)
        {
            if(this_pair.second != countone)
            {
                return false;
            }
        }
        return true;
    }
};

