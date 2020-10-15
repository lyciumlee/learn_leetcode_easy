#include <string>
#include <vector>


using namespace std;


class Solution {
public:
    int countBinarySubstrings(string s)
    {
        vector<int> lens(128, 0);
        int i = 0;
        int l = 0;
        int res = 0;
        while(true)
        {
            while(i < s.size() && s[i] == s[l]) ++i;
            lens[s[l]] = i - l;
            res += min(lens['0'], lens['1']);
            if(i == s.length()) break;
            lens[s[i]] = 0;
            l = i;
        }
        return res;
    }
};