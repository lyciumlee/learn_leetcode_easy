class Solution {
public:
    int romanToInt(string s)
    {
        unordered_map<char, int64_t> roman_value;
        roman_value['I'] = 1;
        roman_value['V'] = 5;
        roman_value['X'] = 10;
        roman_value['L'] = 50;
        roman_value['C'] = 100;
        roman_value['D'] = 500;
        roman_value['M'] = 1000;
        int64_t result = 0 ;
        for(int64_t i=0; i<s.size();i++)
        {
            if(i > 0 && roman_value[s[i]] > roman_value[s[i-1]])
            {
                result += roman_value[s[i]] - 2 * roman_value[s[i-1]];
            }else{
                result += roman_value[s[i]];
            }
        }
        return result;
    }
};