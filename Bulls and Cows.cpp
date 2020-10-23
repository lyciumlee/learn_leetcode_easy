#include <string>


using namespace std;




class Solution {
public:
    string getHint(string secret, string guess)
    {
        int m[256] = {0};
        int a = 0, b = 0, i = 0;
        for(char c : secret)
        {
            char g = guess[i++];
            a += (c == g);
            b += (m[c]++ < 0) + (m[g]-- > 0);

        }
        return to_string(a) + "A" + to_string(b - a) + "B";
    }
};