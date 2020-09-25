#include <string>




using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string s)
    {
        int sLenth = s.size();
        for(int i = 1; i <= sLenth / 2; i++)
        {
            if(sLenth % i != 0) continue;
            int c = sLenth / i;
            string tmp = "";
            for(int j =0; j< c;j++)
            {
                tmp += s.substr(0, i);
            }
            if(s == tmp) return true;
        }
        return false;
    }
};