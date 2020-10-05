#include <algorithm>
#include <stdlib.h>
#include <string>


using namespace std;



class Solution {
public:
    int maximum69Number(int num)
    {
        string s = to_string(num);
        int sLenth = s.size();
        for(int i = 0; i < sLenth; i++)
        {
            if(s[i] == '6')
            {
                s[i] = '9';
                return stoi(s);
            }
        }
        return num;
    }
};