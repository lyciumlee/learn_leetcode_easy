#include <vector>
#include <string>
#include <algorithm>



using namespace std;

class Solution {
public:
    vector<string> reorderLogFiles(vector<string>& logs)
    {
        vector<string> res, digitsLogs;
        vector<vector<string>> data;
        for(string log : logs)
        {
            auto pos = log.find(" ");
            if(log[pos + 1] >= '0' && log[pos + 1] <= '9')
            {
                digitsLogs.push_back(log);
                continue;
            }
            data.push_back({log.substr(0, pos), log.substr(pos + 1)});
        }
        sort(data.begin(), data.end(), [](vector<string> &a, vector<string> &b) {
            return a[1] < b[1] || (a[1] == b[1] && a[0] < b[0]);
        });
        for(auto &a:data)
        {
            res.push_back(a[0] + " " + a[1]);
        }
        for(string log: digitsLogs) res.push_back(log);
        return res;
    }
};