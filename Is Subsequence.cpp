#include <string>


using namespace std;
class Solution {
public:
    bool isSubsequence(string s, string t)
    {
        int i = 0, j = 0;
        int sLenth = s.length();
        int tLenth = t.length();
        for(;j<tLenth && i<sLenth; j++)
        {
            if(s[i] == t[j]) i++;
        }
        return i == sLenth;
    }
};