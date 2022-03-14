#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2)
    {
        int word1_s = word1.length();
        int word2_s = word2.length();
        int const sum_l = word1_s + word2_s;
        string res;
        res.resize(sum_l);
        int cnt = 0;
        for(int i = 0; i < word1_s; i++)
        {
            res[cnt++] = word1[i];
            if(i < word2_s)
            {
                res[cnt++] = word2[i];
            }
        }
        if(word1_s < word2_s)
        {
            for(int i = word1_s; i < word2_s; i++)
            {
                res[cnt++] = word2[i];
            }
        }
        return res;
    }
};
