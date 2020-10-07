#include <vector>
#include <string>


using namespace std;


class Solution {
public:
    int maxScore(string s)
    {
        int cntOne = 0;
        for(int i = 1; i < s.size(); i++)
        {
            if(s[i] == '1') cntOne++;
        }
        int cntZero = (s[0] == '0' ? 1 : 0);
        int maxNum = cntOne + cntZero;

        for(int i = 2; i < s.size(); i++)
        {
            if(s[i-1] == '1') cntOne--;
            else{
                cntZero++;
            }
            maxNum = max(maxNum, cntOne + cntZero);
        }
        return maxNum;
    }
};