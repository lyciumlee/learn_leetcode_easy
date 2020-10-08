#include <string>



using namespace std;

class Solution {
public:
    int maxPower(string s)
    {
        char p = '?';
        int res = 0;
        int cur = 0;
        for(char c: s)
        {
            if(c != p) cur = 0;
            p = c;
            cur++;
            res = max(res, cur);
        }
        return res;
    }
};