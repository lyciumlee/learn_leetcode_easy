#include <bits/stdc++.h>


using namespace std;



class Solution {
public:
    bool checkIfPangram(string sentence)
    {
        unordered_map<char, int> table;
        for(auto & one: sentence)
        {
            if(table.size() == 26)
            {
                return true;
            }
            table[one] += 1;
        }
        if(table.size() == 26)
        {
            return true;
        }
        return false;
    }
};
