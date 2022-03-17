#include<bits/stdc++.h>


using namespace std;


class Solution {
public:
    int numDifferentIntegers(string word)
    {
        unordered_map<string, int> records;
        string temp = "";
        int sign = -1;

        for (int i = 0; i < word.size(); ++i)
        {
            if((word[i] - '0') < 0 || ('9' - word[i] < 0))
            {
                if(sign != -1)
                {
                    records[temp] = 1;
                }
                temp = "";
                sign = -1;
                continue;
            }
            sign = 1;
            int t = (word[i] - '0');
            if(temp == "" && t == 0)
            {

            }else{
                temp = temp + word[i];
            }
        }
        if(sign != -1)
        {
            records[temp] = 1;
        }
        return records.size();
    }
};
