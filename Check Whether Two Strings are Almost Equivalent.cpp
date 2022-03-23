#include<bits/stdc++.h>


using namespace std;


class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2)
    {
        vector<int> w_1(26, 0);
        vector<int> w_2(26, 0);
        for(int i = 0; i < word1.length(); i++)
        {
            w_1[word1[i] - 'a'] += 1;
        }
        for(int i = 0; i < word2.length(); i++)
        {
            w_2[word2[i] - 'a'] += 1;
        }
        for(int i = 0; i < 26; i++)
        {
            if(abs(w_1[i] - w_2[i]) >= 4)
            {
                return false;
            }
        }
        return true;
    }
};
