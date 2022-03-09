#include <bits/stdc++.h>


using namespace std;


class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches)
    {
        int s_p_1 = 0;
        int s_p_0 = 0;
        for(auto i: students)
        {
            if(i == 1)
            {
                s_p_1++;
            }else{
                s_p_0++;
            }
        }
        for(auto i: sandwiches)
        {
            if(i == 1)
            {
                if(s_p_1 > 0)
                {
                    s_p_1--;
                }else{
                    return s_p_0 + s_p_1; 
                }
            }else{
                if(s_p_0 > 0)
                {
                    s_p_0--;
                }else{
                    return s_p_0 + s_p_1;
                }
            }
        }
        return s_p_0 + s_p_1;
    }
};