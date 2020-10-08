#include <string>



using namespace std;



class Solution {
public:
    bool judgeCircle(string moves)
    {
        int i = 0;
        int j = 0;
        for(char c: moves)
        {
            if(c == 'U')
            {
                i += 1;
            }
            else if(c == 'D')
            {
                i -= 1;
            }
            else if(c == 'R')
            {
                j += 1;
            }
            else if(c == 'L')
            {
                j -= 1;
            }

        }
        return i == 0 && j == 0;
    }
};