#include <bits/stdc++.h>



using namespace std;



class Solution {
public:
    int secondHighest(string s)
    {
        int ret = -1;
        int largest = -1;
        int sendcond = -1;
        for(auto &c :s)
        {
            int temp = c - '0';
            if((temp >= 0) && ('9' - c >= 0))
            {
                if(temp > largest)
                {
                    sendcond = largest;
                    largest = temp;
                }
                else if(temp < largest && temp > sendcond)
                {
                    sendcond = temp;
                }
            }
        }
        if(sendcond != -1)
        {
            return sendcond;
        }else{
            return ret;
        }
    }
};
