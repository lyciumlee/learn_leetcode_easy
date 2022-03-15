#include<bits/stdc++.h>


using namespace std;



class Solution {
public:
    bool checkOnesSegment(string s)
    {
        int count = 0;
        int ones = 0;
        for(auto &c : s)
        {
            if(c == '1')
            {
                count += (++ones == 1);
            }else{
                ones = 0;
            }
        }
        return count == 1;
    }
};

