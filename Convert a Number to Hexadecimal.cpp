#include <string>




using namespace std;

class Solution {
public:
    string toHex(int num)
    {
        string res = "";
        string table = "0123456789abcdef";
        int cnt = 0;
        if(num == 0) return "0";
        unsigned int num_b = num;
        while(num_b != 0 && cnt < 8)
        {
            res = table[(num_b & 0xf)] + res;
            num_b >>= 4;
        } 
        return res;
    }
};