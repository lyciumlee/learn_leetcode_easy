#include <bits/stdc++.h>


using namespace std;


class Solution {
public:
    int minimumMoves(string s)
    {
        int res = 0;
        // for(int i = 0; i < s.length() - 2; i++)
        // {

        // }
        int cnt = 0;
        while(cnt < s.length())
        {
            if(s[cnt] == 'X')
            {
                res++;
                cnt += 3;
            }
            else{
                cnt++;
            }
        }
        return res;
        
    }
};
