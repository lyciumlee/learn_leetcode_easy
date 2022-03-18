#include <bits/stdc++.h>



using namespace std;


class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord)
    {
        int first = str_to_num(firstWord);
        int second = str_to_num(secondWord);
        int target = str_to_num(targetWord);
        if(first + second == target)
        {
            return true;
        }else{
            return false;
        }
    }

    int str_to_num(string str)
    {
        int res = 0;
        int cnt = 0;
        for(int i = str.length() - 1; i > -1; i--, cnt++) 
        {
            res = (str[i] - 'a') * pow(10, cnt) + res;
        }
        return res;
    }
};