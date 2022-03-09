#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    string reformatNumber(string number)
    {
        string temp = "";
        for(int i = 0; i < number.length(); i++)
        {
            if(number[i] != ' ' && number[i] != '-')
            {
                temp += number[i];
            }
        }
        string res = "";
        int temp_lenth = temp.length();
        if(temp_lenth <= 4)
        {
            res = special_process(temp);
            return res;
        }
        int cnt = 0;
        while((temp_lenth - cnt) > 4)
        {
            res += temp.substr(cnt, 3) + "-";
            cnt += 3;
        }
        res += special_process(temp.substr(cnt, temp.size() - cnt));
        return res;
    }

    string special_process(string input)
    {
        string res = "";
        int temp_lenth = input.length();
        if(temp_lenth == 2 || temp_lenth == 3)
        {
            res = input;
            return res;
        }
        // res = input[0] + input[1] + "-" + input[2] + input[3];
        res = input.substr(0, 2) + "-" + input.substr(2, 2);
        return res;
    }
};