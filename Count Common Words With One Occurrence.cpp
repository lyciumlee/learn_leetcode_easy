#include <bits/stdc++.h>



using namespace std;

class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2)
    {
        unordered_map<string, int> table_1;
        unordered_map<string, int> table_2;
        for(auto &one : words1)
        {
            table_1[one] += 1;
        }
        int res = 0;
        for(auto &one : words2)
        {
            table_2[one] += 1;
        }
        for(auto& this_pair : table_1)
        {
            if(this_pair.second == 1 && table_2[this_pair.first] == 1)
            {
                res += 1;
            }
        }
        return res;
    }
};