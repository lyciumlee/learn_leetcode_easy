#include <string>


using namespace std;


class Solution {
public:
    string removeOuterParentheses(string S)
    {
        string res;
        int i = 0;
        for(char c: S)
        {
            if(i == 0 && c == '(')
            {
                i -= 1;
                continue;
            }
            else if(i == -1 && c == ')')
            {
                i += 1;
                continue;
            }
            else{
                res += c;
            }
            if(c == '(')
            {
                i -= 1;
            }
            else{
                i += 1;
            }
        }
        return res;
    }
};