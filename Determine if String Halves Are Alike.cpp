#include <bits/stdc++.h>


using namespace std;



class Solution {
public:
    bool halvesAreAlike(string s)
    {
        unordered_map<char, int> vowel_table({{'a', 1}, {'e', 1}, {'o', 1}, {'i', 1}, {'u', 1},
        {'A', 1}, {'E', 1}, {'I', 1}, {'O', 1}, {'U', 1}
        });
        int a_vowel = 0;
        int b_vowel = 0;
        int s_lenth_half = s.length() / 2;
        for(int i = 0; i < s_lenth_half; i++)
        {
            if(vowel_table[s[i]] == 1)
            {
                a_vowel++;
            }
        }
        for(int i = s_lenth_half; i < s.length();i++)
        {
            if(vowel_table[s[i]] == 1)
            {
                b_vowel++;
            }
        }
        if(b_vowel == a_vowel)
        {
            return true;
        }else{
            return false;
        }
    }

};