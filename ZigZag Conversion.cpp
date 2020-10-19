#include <string>
#include <vector>

using namespace std;





class Solution {
public:
    string convert(string s, int numRows)
    {
        if(numRows <= 1) return s;
        string res;
        int i = 0;
        int n = s.size();
        vector<string> vec(numRows);
        while(i < n)
        {
            for(int pos = 0; pos < numRows && i < n; ++pos)
            {
                vec[pos] += s[i++];
            }
            for(int pos = numRows - 2; pos >= 1 &&  i < n; --pos)
            {
                vec[pos] += s[i++];
            }
        }
        for(auto &a: vec) res += a;
        return res;
    }
};