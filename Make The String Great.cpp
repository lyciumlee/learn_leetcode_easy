#include <string>
#include <algorithm>
#include <math.h>

using namespace std;



class Solution {
public:
    string makeGood(string s)
    {
        string res;
        for(char c : s)
        {
            if(res.length() && abs(res.back() - c) == abs('a' - 'A'))
            {
                res.pop_back();
            }else{
                res.push_back(c);
            }
        }
        return res;
    }
};