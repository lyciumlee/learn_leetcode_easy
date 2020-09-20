#include <string>
#include <unordered_map>
#include <sstream>


using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string s)
    {
        unordered_map<char, int> pattern_map;
        unordered_map<string, int> s_map;
        istringstream inputStream(s);
        int i=0;
        int n = pattern.size();
        for(string word ; inputStream >> word; i++)
        {
            if(i == n || pattern_map[pattern[i]] != s_map[word]) return false;
            pattern_map[pattern[i]] = i + 1;
            s_map[word] = i + 1;
        }
        return i == n;
    }
};