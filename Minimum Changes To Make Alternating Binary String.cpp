#include <bits/stdc++.h>


using namespace std;


class Solution {
public:
    int minOperations(string s) {
        int count1 = 0;
        int count2 = 0;
        for(int i = 0; i < s.length(); i++) {
            if(((i & 1) == 0) && (s[i] != '0'))
            {
                count1++;
            }
            if(((i & 1) == 1) && (s[i] != '1'))
            {
                count1++;
            }
            if((i & 1) == 0 && (s[i] != '1'))
            {
                count2++;
            }
            if((i&1)== 1 && (s[i] != '0'))
            {
                count2++;
            }
        }
        if(count1 < count2)
        {
            return count1;
        }else{
            return count2;
        }
    }
};