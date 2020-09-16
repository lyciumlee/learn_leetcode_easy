class Solution {
public:
    string longestCommonPrefix(vector<string>& strs)
    {
        if(strs.empty()) return "";
        if(strs.size() == 1) return strs[0];
        for(int64_t i=0;i<strs[0].size();i++)
        {
            for(int64_t str_index=1;str_index < strs.size();str_index++)
            {
                if(strs[str_index][i] != strs[0][i])
                {
                    return strs[0].substr(0, i);
                }
            }
        }
        return strs[0];
    }

};