#include<bits/stdc++.h>



using namespace std;


class Solution {
public:
    string replaceDigits(string s)
    {
        string res = s;
        for(int i = 1; i < res.length(); i+=2)
        {
            res[i] = (char)res[i] - '0' + (char)res[i-1];
        }
        return res;
    }
};
