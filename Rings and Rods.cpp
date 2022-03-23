#include <bits/stdc++.h>



using namespace std;

class Solution {
public:
    int countPoints(string rings)
    {
        int res = 0;
        vector<int> rods(10, 0);
        for(int i = 0; i < rings.size(); i+=2)
        {
            char color_s = rings[i];
            int rod = rings[i+1] - '0';
            if(color_s == 'R')
            {
                rods[rod] |= (4);
            }
            else if(color_s == 'G')
            {
                rods[rod] |= (2);
            }
            else{
                rods[rod] |= (1);
            }
        }
        for(int i = 0; i < 10; i++)
        {
            if(rods[i] == 7)
            {
                res += 1;
            }
        }
        return res;
    }
};
