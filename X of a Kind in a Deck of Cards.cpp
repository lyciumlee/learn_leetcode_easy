#include <vector>
#include <numeric>
#include <unordered_map>

using namespace std;



class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck)
    {
        unordered_map<int, int> m;
        for(int card: deck)
        {
            m[card]++;
        }
        int X = deck.size();
        for(const auto& p: m)
        {
            X = gcd(X, p.second);
        }
        return X >= 2;
    }
};