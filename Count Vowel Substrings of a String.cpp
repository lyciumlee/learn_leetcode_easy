#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int check_vowel(string input_string)
    {
        unordered_map<char, int> ttt;
        vector<char> vowel = {'a', 'e', 'i', 'o', 'u'};
        for(auto &one: input_string)
        {
            if(one != 'a' && one != 'e' && one != 'i' && one != 'o' && one != 'u')
            {
                return false;
            }
            ttt[one] += 1;
        }
        for(auto &one: vowel)
        {
            if(ttt[one] == 0)
            {
                return false;
            }
        }
        if(vowel.size() != 5) return false;
        return true;
    }

    int countVowelSubstrings(string word)
    {
        int res = 0;
        for(int i = 0; i < word.length(); i++)
        {
            for(int j = i+4; j < word.length(); j++)
            {
                string one = word.substr(i, j - i + 1);
                if(check_vowel(one))
                {
                    res += 1;
                }
            }
        }
        return res;
    }
};