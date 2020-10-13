#include <vector>
#include <algorithm>


using namespace std;


class Solution {
public:
    vector<int> mostVisited(int n, vector<int>& rounds)
    {
        vector<int> count(n);
        count[rounds[0] - 1] = 1;
        for(int i = 1; i < rounds.size(); i++)
        {
            for(int s = rounds[i - 1];;s++)
            {
                count[s %= n]++;
                if(s == rounds[i] - 1) break;
            }
        }
        const int max_count = *max_element(count.begin(), count.end());
        vector<int> res;
        for(int i = 0; i < n; i++)
        {
            if(count[i] == max_count) res.push_back(i + 1);
        }
        return res;
    }
};