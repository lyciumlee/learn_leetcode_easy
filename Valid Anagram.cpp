#include <string>



using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t)
    {
        int tables[256]={0};
        int sLenth = s.length();
        int tLenth = t.length();
        if(sLenth != tLenth) return false;
        for(int i=0; i<sLenth; i++)
        {
            tables[s[i]]++;
        }
        for(int i=0; i<tLenth; i++)
        {
            tables[t[i]]--;
            if(tables[t[i]] < 0) return false;
        }
        return true;
    }
};