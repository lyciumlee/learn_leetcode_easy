#include <string>



using namespace std;


class Solution {
public:
    string thousandSeparator(int n)
    {
        string res = "";
        int count = 0;
        do{
            if(count % 3 == 0 && res.size())
            {
                res = "." + res;
            }
            count++;
            res = to_string(n % 10) + res;
            n /= 10;
        }while(n);
        return res;
    }
};