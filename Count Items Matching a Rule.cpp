#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue)
    {
        int ruleKey_index = 0;
        int count = 0;
        if(ruleKey.compare("type") == 0)
        {
            ruleKey_index = 0;
        }
        else if(ruleKey.compare("color") == 0)
        {
            ruleKey_index = 1;
        }
        else if(ruleKey.compare("name") == 0)
        {
            ruleKey_index = 2;
        }
        for(auto &item: items)
        {
            if(item[ruleKey_index] == ruleValue)
            {
                count++;
            }
        }
        return count;
    }
};