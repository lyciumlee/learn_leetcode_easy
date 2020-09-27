#include <string>
#include <sstream>
#include <algorithm>


using namespace std;

class Solution {
public:
    string reverseWords(string s)
    {
        string res = "";
        string t = "";
        if(s.empty()) return res;
        istringstream instr(s);
        while(instr >> t)
        {
            reverse(t.begin(), t.end());
            res += t + " ";
        }
        res.pop_back();
        return res;
    }
};