#include <string>






using namespace std;

class Solution {
public:
    string licenseKeyFormatting(string S, int K)
    {
        string res = "";
        int Slenth = S.size();
        for(int i = Slenth - 1; i >= 0; i--)
        {
            if(S[i] != '-')
            {
                ((res.size() % (K + 1) - K) ? res : res += '-') += toupper(S[i]);
            }

        }
        return string(res.rbegin(), res.rend());
    }
};