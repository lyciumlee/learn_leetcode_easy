#include <bits/stdc++.h>


using namespace std;


class Solution {
public:
    string reversePrefix(string word, char ch)
    {
        string res = word;
        auto find_index = word.find(ch);
        if(find_index == string::npos)
        {
            return res;
        }
        int nn = find_index >> 1;
        for(int i = 0; i <= nn; ++i)
        {
            char temp = res[i];
            res[i] = res[find_index - i];
            res[find_index - i] = temp;
        }
        return res;
    }
};
