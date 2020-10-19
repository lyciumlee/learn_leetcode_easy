#include <string>
#include <vector>
#include <string.h>

using namespace std;


class Solution {
public:
    string longestPalindrome(string s)
    {
        if(s.empty()) return "";
        int n = s.size();
        int **dp = new int *[n];
        for(int i = 0; i < n; i++)
        {
            dp[i] = new int [n];
            memset(dp[i], 0, sizeof(int) * n);
        }
        int left = 0;
        int len = 1;
        for(int i = 0; i < n; i++)
        {
            dp[i][i] = 1;
            for(int j = 0; j < i; j++)
            {
                dp[j][i] = (s[i] == s[j] && (i - j < 2 || dp[j + 1][i - 1]));
                if(dp[j][i] && len < i - j + 1)
                {
                    len = i - j + 1;
                    left = j;
                }
            }
        }
        return s.substr(left, len);
    }
};