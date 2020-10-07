#include <vector>
#include <string>

using namespace std;



class Solution {
public:
    vector<string> stringMatching(vector<string>& words)
    {
        vector<string> res;
        const int WordsLenth = words.size();
        for(int i = 0; i < WordsLenth; i++)
        {
            for(int j = 0; j < WordsLenth; j++)
            {
                if(i == j) continue;
                if(words[j].find(words[i]) != string::npos)
                {
                    res.push_back(words[i]);
                    break;
                }
            }
        }
        return res;
    }
};