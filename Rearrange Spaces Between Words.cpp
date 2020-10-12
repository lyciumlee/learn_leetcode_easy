#include <string>
#include <vector>

using namespace std;



class Solution {
public:
    string reorderSpaces(string text)
    {
        vector<string> words;
        string word;
        int t = 0;
        for(char c: text)
        {
            if(c == ' ')
            {
                t++;
                if(!word.empty())
                {
                    words.push_back(word);
                    word.clear();
                }
            }
            else{
                word += c;
            }
        }
        if(!word.empty()) words.push_back(word);
        const int n = words.size();
        if(n == 1) return words[0] + string(t, ' ');
        const int s = t / (n - 1);
        const int r = t % (n - 1);
        string res;
        for(int i = 0; i < words.size(); i++)
        {
            if(i) res.append(s, ' ');
            res += words[i];
        }
        res.append(r, ' ');
        return res;
    }
};