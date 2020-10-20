#include <vector>
#include <string>


using namespace std;



class Solution {
public:
    vector<string> letterCombinations(string digits)
    {
        if(digits.empty()) return {};
        vector<string> res{""};
        vector<string> dict{"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        for(int i = 0; i < (int)digits.size(); i++)
        {
            vector<string> t;
            string str = dict[digits[i] - '0'];
            for(int j = 0; j < (int)str.size(); j++)
            {
                for(string s: res) t.push_back(s + str[j]);
            }
            res = t;
        }
        return res;
    }
};