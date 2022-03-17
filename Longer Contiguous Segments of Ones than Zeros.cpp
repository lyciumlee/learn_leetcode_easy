#include <bits/stdc++.h>


using namespace std;


class Solution {
public:
    bool checkZeroOnes(string s)
    {
        int one_max_lenth = 0;
        int zero_max_lenth = 0;
        int one_continue_lenth = 0;
        int zero_continue_lenth = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '0')
            {
                zero_continue_lenth++;
                if(one_continue_lenth > one_max_lenth)
                {
                    one_max_lenth = one_continue_lenth;
                }
                one_continue_lenth = 0;
            }else{
                one_continue_lenth++;
                if(zero_continue_lenth > zero_max_lenth)
                {
                    zero_max_lenth = zero_continue_lenth;
                }
                zero_continue_lenth = 0;
            }
        }
        if(zero_continue_lenth > zero_max_lenth) zero_max_lenth = zero_continue_lenth;
        if(one_continue_lenth > one_max_lenth) one_max_lenth = one_continue_lenth;
        if(one_max_lenth > zero_max_lenth) return true;
        return false;
    }
};
