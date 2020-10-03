#include <string>
#include <algorithm>
#include <vector>

using namespace std;


class Solution {
public:
    int maxNumberOfBalloons(string text)
    {
        int chars[32];
        fill(chars, chars+32, 0);
        for(char c: text)
        {
            chars[c - 'a']++;
        }
        return min({chars['b' - 'a'], chars['a' - 'a'], chars['l' - 'a'] / 2, chars['o' - 'a'] / 2, chars['n' - 'a']});
    }
};