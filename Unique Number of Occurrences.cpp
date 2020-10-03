#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;



class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr)
    {
        unordered_map<int, int> map;
        for(int a: arr) map[a]++;
        unordered_set<int> s;
        for(auto mapItem: map)
        {
            if(!s.insert(mapItem.second).second)
            {
                return false;
            }
        }
        return true;
    }
};