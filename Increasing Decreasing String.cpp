#include <string>
#include <vector>


using namespace std;

class Solution {
public:
    string sortString(string s)
    {
        vector<int> count(26);
        for(char c: s)
        {
            count[c - 'a']++;
        }
        string res;
        while(res.size() < s.size())
        {
            for(char c = 'a'; c <= 'z'; c++)
            {
                count[c - 'a']--;
                if(count[c - 'a'] >= 0)
                {
                    res += c;
                }
            }
            for(char c = 'z'; c >= 'a'; c--)
            {
                count[c - 'a']--;
                if(count[c - 'a'] >= 0)
                {
                    res += c;
                }
            }
        }
        return res;
    }
};