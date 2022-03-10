#include <bits/stdc++.h>


using namespace std;


class Solution {
public:
    string maximumTime(string time)
    {
        string result = time;
        if(result[0] == '?')
        {
            result[0] = '2';
        }
        if(result[1] == '?')
        {
            if(result[0] == '2')
            {
                result[1] = '3';
            }else{
                result[1] = '9';
            }
        }
        if(result[3] == '?')
        {
            result[3] = '5';
        }
        if(result[4] == '?')
        {
            result[4] = '9';
        }
        return result;
    }
};