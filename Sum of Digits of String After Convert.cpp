#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int getLucky(string s, int k)
    {
        int s_len = s.length();
        string nn = "";
        int res = 0;
        for(int i = 0; i < s_len; i++) {
            nn += to_string(s[i] - 'a' + 1);
        }
        for(int i = 0; i < nn.size(); i++) {
            res += nn[i] - '0';
        }
        if(k == 1) return res;
        for(int i = 0; i < k - 1; i++) {
            int temp = res;
            int t1 = 0;
            while(temp > 0){
                t1 += (temp % 10);
                temp /= 10;
            }
            res = t1;
        }
        return res;
    }
};


