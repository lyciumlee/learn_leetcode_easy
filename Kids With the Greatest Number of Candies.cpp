#include <vector>
#include <algorithm>



using namespace std;




class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies)
    {
        const int max_candies = *max_element(candies.begin(), candies.end());
        vector<bool> res(candies.size(), 0);
        for(int i = 0; i < candies.size(); i++)
        {
            res[i] = (candies[i] + extraCandies >= max_candies);
        }
        return res;
    }
};