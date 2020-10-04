#include <string>




using namespace std;


class Solution {
public:
    int balancedStringSplit(string s)
    {
        int cnt = 0;
        int res = 0;
        for(char c: s)
        {
            if(c == 'R')
            {
                cnt++;
            }else{
                cnt--;
            }
            if(cnt == 0) res++;
        }
        return res;
    }
};