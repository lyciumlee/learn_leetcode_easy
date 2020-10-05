#include <string>




using namespace std;

class Solution {
public:
    string freqAlphabets(string s)
    {
        string res = "";
        int sLenth = s.size();
        for(int i = 0; i < sLenth; i++)
        {
            int c = s[i] - '0';
            if(i + 2 < sLenth && s[i+2] == '#')
            {
                int n = c * 10 + (s[i+1] - '0');
                res.push_back((char)(n + 96));
                i++;
                i++;
            }else{
                res.push_back((char)(96 + c));
            }
        }
        return res;
    }
};