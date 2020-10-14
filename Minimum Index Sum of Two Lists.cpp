#include <vector>
#include <string>
#include <unordered_map>
#include <limits.h>

using namespace std;


class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2)
    {
        unordered_map<string, int> indices;
        for(int i = 0; i < list1.size(); i++)
        {
            indices[list1[i]] = i;
        }
        vector<string> res;
        int best_i = INT_MAX;
        for(int i = 0; i < list2.size(); i++)
        {
            if(!indices.count(list2[i])) continue;
            int index = indices[list2[i]] + i;
            if(index < best_i) res.clear();
            if(index <= best_i)
            {
                best_i = index;
                res.push_back(list2[i]);
            }
        }
        return res;
    }
};