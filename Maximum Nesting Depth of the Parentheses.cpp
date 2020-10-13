#include <string>
#include <algorithm>
#include <math.h>

using namespace std;


class Solution {
public:
    int maxDepth(string s)
    {
        int res = 0;
        int d = 0;
        for(char c: s)
        {
            if(c == '(') res = max(res, ++d);
            else if(c == ')')
            {
                --d;
            }
        }
        return res;
    }
};