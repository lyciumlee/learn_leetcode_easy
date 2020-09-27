#include <string>
#include <vector>
#include <unordered_set>


using namespace std;


class Solution {
public:
    int numUniqueEmails(vector<string>& emails)
    {
        unordered_set<string> res;
        for(string email : emails)
        {
            string name;
            for(char c : email)
            {
                if(c == '.') continue;
                if(c == '+' || c == '@') break;
                name.push_back(c);
            }
            name += email.substr(email.find('@'));
            res.insert(name);
        }
        return res.size();
    }
};