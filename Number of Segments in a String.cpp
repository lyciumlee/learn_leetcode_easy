#include <string>



using namespace std;

class Solution {
public:
    int countSegments(string s)
    {
        if(s.empty()) return 0;
        int split = 0;
        int sLenth = s.size();
        for(int i = 0; i < sLenth; i++)
        {
            if(s[i] != ' ' && (i == 0 || (s[i - 1] == ' '))) split++;
        }
        return split;
    }
};