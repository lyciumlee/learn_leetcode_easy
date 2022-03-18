#include <bits/stdc++.h>


using namespace std;



class Solution {
public:
    bool makeEqual(vector<string>& words)
    {
        if(words.size() == 1) return true;
        unordered_map<char, int> table;
        int n_word = words.size();
        for(auto & one_str : words)
        {
            for(auto & one_char: one_str)
            {
                table[one_char] += 1;
            }
        }
        for(auto& this_pair: table)
        {
            if(this_pair.second % n_word) return false;
        }
        return true;
    }
};