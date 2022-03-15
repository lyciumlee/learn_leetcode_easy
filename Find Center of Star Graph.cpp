#include <bits/stdc++.h>



using namespace std;



class Solution {
public:
    int findCenter(vector<vector<int>>& edges)
    {
        vector<int> & a1 = edges[0];
        vector<int> & a2 = edges[1];
        if(a1[0] == a2[0] || a1[0] == a2[1])
        {
            return a1[0];
        }else
        {
            return a1[1];
        }
    }
};