#include <vector>
#include <unordered_set>
#include <algorithm>



using namespace std;


class Solution {
public:
    int distributeCandies(vector<int>& candies)
    {
        unordered_set<int> m;
        int candiesLenth = candies.size();
        for(int i = 0; i < candiesLenth;i++)
        {
            m.insert(candies[i]);
        }
        return min((int)m.size(), candiesLenth / 2);

    }
};