#include <string>
#include <algorithm>



using namespace std;


class Solution {
public:
    string gcdOfStrings(string str1, string str2)
    {
        int str1Lenth = str1.size();
        int str2Lenth = str2.size();
        int minLenth = min(str1Lenth, str2Lenth);
        string res="";
        for(int i= minLenth; i>=1;i--)
        {
            if((str1Lenth % i == 0) && (str2Lenth % i == 0))
            {
                int l1r = str1Lenth / i;
                int l2r = str2Lenth / i;
                string padstr = str1.substr(0, i);
                string rebuildStr1 = genRpstr(l1r, padstr);
                string rebuildStr2 = genRpstr(l2r, padstr);
                if(rebuildStr1 == str1 && rebuildStr2 == str2)
                {
                    res = padstr;
                    break;
                }
            }
        }
        return res;
    }
    string genRpstr(int times, string subStr)
    {
        string res="";
        while(times--)
        {
            res += subStr;
        }
        return res;
    }
};