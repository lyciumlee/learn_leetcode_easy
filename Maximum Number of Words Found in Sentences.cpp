#include <bits/stdc++.h>



using namespace std;


class Solution {
public:
    int mostWordsFound(vector<string>& sentences)
    {
        int max_words = 0;
        for(auto& one: sentences)
        {
            int this_word = 0;
            int p = 0;
            auto it = one.find(" ", p);
            while(it != string::npos)
            {
                this_word += 1;
                p = it+1;
                it = one.find(" ", p);
            }
            this_word += 1;
            max_words = max(max_words, this_word);
        }
        return max_words;
    }
};