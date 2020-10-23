#include <string>


using namespace std;


class Solution {
public:
    bool isAdditiveNumber(string num)
    {
        for(int i = 1; i < num.size(); i++)
        {
            string s1 = num.substr(0, i);
            if(s1.size() > 1 && s1[0] == 0) break;
            for(int j = i + 1; j < num.size(); j++)
            {
                string s2 = num.substr(i, j - i);
                if(s2.size() > 1 && s2[0] == 0) break;
                if(helper(num.substr(j), s1, s2)) return true;
            }
        }
        return false;
    }
    bool helper(string num, string num1, string num2)
    {
        if((num1.size() > 1 && num1[0] == '0') || (num2.size() > 1 && num2[0] == '0')) return false;
        string sumStr = to_string(stol(num1) + stol(num2));
        if(sumStr == num) return true;
        if(sumStr.size() >= num.size() || num.substr(0, sumStr.size()) != sumStr) return false;
        return helper(num.substr(sumStr.size()), num2, sumStr);
    }
};