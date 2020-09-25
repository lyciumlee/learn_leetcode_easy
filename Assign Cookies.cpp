#include <vector>
#include <algorithm>



using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s)
    {
        int contentNumbers = 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int gLenth = g.size();
        int sLenth = s.size();
        for(int i = 0; i < sLenth && contentNumbers < gLenth; i++)
        {
            if(s[i] >= g[contentNumbers]) contentNumbers++;
        }
        return contentNumbers;
    }
};