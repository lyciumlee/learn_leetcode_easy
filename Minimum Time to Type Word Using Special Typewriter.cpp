#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    int minTimeToType(string word)
    {
        int res = 0;
        int now_p = 0;
        for(int i = 0; i < word.size(); i++)
        {
            int aim_c = (int)(word[i] - 'a');
            int delta = aim_c - now_p;
            if(delta < 0)
            {
                delta = 26 + delta;
            }
            delta = min(delta, 26 - delta);
            res += delta;
            res += 1;
            now_p = aim_c;
        }
        return res;
    }
};
