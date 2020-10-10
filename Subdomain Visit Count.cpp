#include <string>
#include <vector>
#include <unordered_map>


using namespace std;


class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains)
    {
        unordered_map<string, int> counts;
        for(const string &cpdomain: cpdomains)
        {
            int index = cpdomain.find(' ');
            int count = stoi(cpdomain.substr(0, index));
            string domain = cpdomain.substr(index + 1);
            while(true)
            {
                counts[domain] += count;
                int i = domain.find('.');
                if(i == string::npos) break;
                domain = domain.substr(i+1);
            }
        }
        vector<string> res;
        for(const auto& kv: counts)
        {
            res.push_back(to_string(kv.second) + ' ' + kv.first);
        }
        return res;
    }
};