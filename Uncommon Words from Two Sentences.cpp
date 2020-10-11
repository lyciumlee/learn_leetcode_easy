#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>

using namespace std;



class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B)
    {
        istringstream ss(A + " " + B);
        unordered_map<string, int> counts;
        string s;
        while(ss >> s)
        {
            counts[s]++;
        }
        vector<string> res;
        for(const auto& p: counts)
        {
            if(p.second == 1)
            {
                res.push_back(p.first);
            }
        }
        return res;
    }
};