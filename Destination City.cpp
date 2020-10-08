#include <vector>
#include <string>
#include <unordered_map>


using namespace std;


class Solution {
public:
    string destCity(vector<vector<string>>& paths)
    {
        unordered_map<string, int> in, out;
        for(const auto & path: paths)
        {
            ++out[path[0]];
            ++in[path[1]];
        }
        for(const auto &[city, degree]: in)
        {
            if(degree == 1 && out[city] == 0) return city;
        }
        return "";
    }
};