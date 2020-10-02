#include <string>
#include <vector>
#include <sstream>



using namespace std;


class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second)
    {
        istringstream is(text);
        vector<string> textSplit, res;
        string tmp;
        while(is >> tmp)
        {
            textSplit.push_back(tmp);
        }
        for(int i = 0; i < textSplit.size() - 2;i++)
        {
            if(textSplit[i] == first && textSplit[i+1] == second)
            {
                res.push_back(textSplit[i+2]);
            }
        }
        return res;
    }
};