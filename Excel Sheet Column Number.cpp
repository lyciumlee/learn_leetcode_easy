#include <string>
#include <algorithm>


using namespace std;

class Solution {
public:
    int titleToNumber(string s)
    {
        int res = 0;
        int lenth = s.size();
        for(int i = 0; i < lenth; i++)
        {
            res *= 26;
            res += s[i] - 'A' + 1;
        }
        return res;
    }
};