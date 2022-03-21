#include <bits/stdc++.h>


using namespace std;

class Solution {
public:
    bool areNumbersAscending(string s)
    {
        istringstream is(s);
        string temp;
        int last_number = -1;
        while(is >> temp)
        {
            if(is_num_str(temp))
            {
                int get = stoi(temp);
                if(get <= last_number)
                {
                    return false;
                }
                last_number = get;
            }
        }
        return true;
    }

    bool is_num_str(string &s)
    {
        for(int i = 0; i < s.length(); i++)
        {
            if(isdigit(s[i]) == 0)
            {
                return false;
            }
        }
        return true;
    }
};