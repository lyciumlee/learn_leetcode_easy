#include <bits/stdc++.h>




using namespace std;



class Solution {
public:
    string sortSentence(string s)
    {
        string tmp;
        vector<string> words;
        istringstream stream(s);
        while(stream >> tmp)
        {
            words.push_back(tmp);
        }
        sort(words.begin(), words.end(), [&](string a, string b) { return a.back() < b.back(); });
        string ret = "";
        for(int i = 0; i < words.size() - 1; i++)
        {
            ret += words[i].substr(0, words[i].length() - 1);
            ret += " ";
        }
        return ret + words[words.size() - 1].substr(0, words[words.size() - 1].size() - 1);
    }
};
