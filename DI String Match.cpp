#include <string>
#include <vector>


using namespace std;


class Solution {
public:
    vector<int> diStringMatch(string S)
    {
        int Slenth = S.size();
        int i = 0, j = Slenth;
        vector<int> res;
        for(int k = 0; k < Slenth; k++)
        {
            if(S[k] == 'I')
            {
                res.push_back(i);
                i++;
            }else{
                res.push_back(j);
                j--;
            }
        }
        if(S[Slenth - 1] == 'D') res.push_back(i);
        else{
            res.push_back(j);
        }
        return res;
    }
};