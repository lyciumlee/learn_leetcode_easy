#include <vector>
#include <string>
#include <unordered_map>

using namespace std;



class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs)
    {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> m;
        for(string str: strs)
        {
            vector<int> cnt(26, 0);
            string t;
            for(char c: str) ++cnt[c - 'a'];

            for(int i = 0; i < 26; ++i)
            {
                if(cnt[i] == 0) continue;
                t += string(1, i + 'a') + to_string(cnt[i]);
            }
            m[t].push_back(str);
        }
        for(auto a:m)
        {
            res.push_back(a.second);
        }

        return res;
    }
};