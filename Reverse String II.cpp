#include <string>
#include <algorithm>


using namespace std;

class Solution {
public:
    string reverseStr(string s, int k)
    {
        int sLenth = s.size();
        for(int i = 0; i < sLenth; i+= 2*k)
        {
            reverse(s.begin()+i, min(s.begin()+i+k, s.end()));
        }
        return s;
    }
};