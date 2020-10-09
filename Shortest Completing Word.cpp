#include <string>
#include <vector>
#include <limits.h>

using namespace std;


class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words)
    {
        vector<int> l(26, 0);
        for(const char ch: licensePlate)
        {
            if(isalpha(ch)) l[tolower(ch) - 'a']++;
        }
        string res;
        int min_l = INT_MAX;
        for(const string& word: words)
        {
            if(word.size() >= min_l) continue;
            if(!match(l, word)) continue;
            min_l = word.size();
            res = word;
        }
        return res;
    }

private:
    bool match(const vector<int> &l, const string &word)
    {
        vector<int> c(26, 0);
        for(const char ch: word)
        {
            c[tolower(ch) - 'a']++;
        }
        for(int i = 0; i < 26; i++)
        {
            if(c[i] < l[i]) return false;
        }
        return true;
    }
};