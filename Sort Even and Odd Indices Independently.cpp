#include <bits/stdc++.h>



using namespace std;


class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums)
    {
        int n = nums.size();
        vector<int> res(n, 0);
        vector<int> t1,t2;
        if(n&1)
        {
            t1.resize((n-1)/2+1, 0);
            t2.resize((n-1)/2, 0);
        }else{
            t1.resize(n/2, 0);
            t2.resize(n/2, 0);
        }
        for(int i=0; i<n; i++)
        {
            if(i&1)
            {
                t2[i/2] = nums[i];
            }else{
                t1[i/2] = nums[i];
            } 
        }
        sort(t1.begin(), t1.end(), [&](int a, int b) {
            return a<b;
        });

        sort(t2.begin(), t2.end(), [&](int a, int b){ 
            return a>b;
        });
        for(int i=0; i < res.size();i++)
        {
            if(i&1)
            {
                res[i] = t2[i/2];
            }else{
                res[i] = t1[i/2];
            }
        }
        return res;
    }
};
