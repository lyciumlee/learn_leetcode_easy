#include <bits/stdc++.h>


using namespace std;

class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word)
    {
        int res = 0;
        for(auto & one_p: patterns)
        {
            auto pos = word.find(one_p);
            if(pos != string::npos)
            {
                res += 1;
            }
        }
        return res;
    }
};