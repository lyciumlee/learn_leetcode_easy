#include<bits/stdc++.h>


using namespace std;


class Solution {
public:
    bool areAlmostEqual(string s1, string s2)
    {
        vector<char> v1(2), v2(2);
        int diff_count = 0;
        int cnt = 0;
        for(int i = 0; i < s1.size(); i++)
        {
            if(s1[i] != s2[i])
            {
                if(diff_count > 1){
                    return false;
                }
                v1[diff_count] = s1[i];
                v2[diff_count] = s2[i];
                diff_count++;
            }
        }
        if((v1[0] == v2[1]) && (v1[1] == v2[0]))
        {
            return true;
        }else{
            return false;
        }
    }
};

