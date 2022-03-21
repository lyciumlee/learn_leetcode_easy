#include <bits/stdc++.h>


using namespace std;


class Solution {
public:

    int checkValidStr(string str) 
    {
        int n = str.size();
        int has_hypen = false;
        for(int i = 0; i < n; i++)
        {
            if(isdigit(str[i]))
            {
                return false;
            }
            else if(str[i] == '-')
            {
                if(has_hypen || (i == n-1) || i==0 || (!isalpha(str[i-1])) || (!isalpha(str[i+1])))
                {
                    return false;
                }
                has_hypen = true;
            }
            else if(str[i] == '!' || (str[i] == '.') || (str[i] == ','))
            {
                if(i != n-1)
                {
                    return false;
                }
            }
        }
        return true;
    }

    int countValidWords(string sentence)
    {
        int n = sentence.size();
        int l = 0;
        int r = 0;
        int res = 0;
        while(true)
        {
            while(l < n && sentence[l] == ' ')
            {
                l++;
            }
            if(l >= n)
            {
                break;
            }
            r = l + 1;
            while(r < n && sentence[r] != ' ')
            {
                r++;
            }
            if(checkValidStr(sentence.substr(l, r-l)))
            {
                res += 1;
            }
            l = r+1;
        }
        return res;
    }
};