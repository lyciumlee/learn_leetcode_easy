#include <string>




using namespace std;



class Solution {
public:
    string addStrings(string num1, string num2)
    {
        string res;
        int num1L = num1.size();
        int num2L = num2.size();
        int num1index = num1L - 1;
        int num2index = num2L - 1;
        int carry = 0;
        while(num1index >= 0 || num2index >= 0)
        {
            int a = (num1index >= 0) ? num1[num1index--] - '0' : 0;
            int b = (num2index >= 0) ? num2[num2index--] - '0' : 0;
            int sum = a + b + carry;
            res.insert(res.begin(), (sum % 10) + '0');
            carry = sum / 10;
        }
        return carry ? ("1" + res) : res;
    }
};