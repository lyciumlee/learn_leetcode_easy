#include <bits/stdc++.h>


using namespace std;



class Solution {
public:
    string capitalizeTitle(string title)
    {
        string res = "";
        istringstream is(title);
        string temp;
        while(is >> temp)
        {
            for(int i = 0; i < temp.length(); i++)
            {
                temp[i] = tolower(temp[i]);
            }
            if(temp.length() > 2)
            {
                temp[0] = toupper(temp[0]);
            }
            res = res + " " + temp;
        }
        res = res.substr(1, res.length() - 1);
        return res;
        
    }
};
