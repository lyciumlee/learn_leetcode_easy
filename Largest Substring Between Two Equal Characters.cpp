#include <vector>
#include <string>


using namespace std;


class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s)
    {
        vector<int> first(26, -1);
        int ans = -1;
        for(int i = 0; i < s.size(); i++)
        {
            int &p = first[s[i] - 'a'];
            if(p != -1)
            {
                ans = max(ans, i - p -1);
            }else{
                p = i;
            }
        }
        return ans;
    }
};