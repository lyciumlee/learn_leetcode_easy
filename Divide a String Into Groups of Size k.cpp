#include <bits/stdc++.h>


using namespace std;


class Solution {
public:
    vector<string> divideString(string s, int k, char fill)
    {
        vector<string> res;
        int no_padding_group = s.size() / k;
        int padding_lenth = 0;
        if(s.size() % k != 0)
        {
            padding_lenth = k - s.size() % k;
        }
        for(int i = 0; i < no_padding_group; i++)
        {
            res.push_back(s.substr(i*k, k));
        }
        string padding(padding_lenth, fill);
        if(padding_lenth)
        {
            res.push_back(s.substr(no_padding_group * k, s.size() - no_padding_group) + padding);
        }else{
            
        }
        return res;
    }
};
