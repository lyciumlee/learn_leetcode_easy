#include <vector>
#include <string>
#include <algorithm>
#include <stdlib.h>


using namespace std;



class Solution {
public:
    int countCharacters(vector<string>& words, string chars)
    {
        int counts[32] = {0};
        fill(counts, counts+32, 0);
        for(char c: chars)
        {
            counts[c - 'a']++;
        }
        int res = 0;
        int cur[32] = {0};
        for(const string& word: words)
        {
            fill(cur, cur+32, 0);
            bool sign = true;
            for(char c: word)
            {
                cur[c - 'a']++;
                if(cur[c - 'a'] > counts[c - 'a'])
                {
                    sign = false;
                    break;
                }
            }
            if(sign) res += word.size();
        }
        return res;

    }
};