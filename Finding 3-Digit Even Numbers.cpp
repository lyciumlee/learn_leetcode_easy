#include <bits/stdc++.h>


using namespace std;



class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits)
    {
        
        unordered_set<int> temp;
        for(int i = 0; i < digits.size(); i++)
        {
            for(int j = i+1; j < digits.size(); j++)
            {
                for(int k = j+1; k < digits.size(); k++)
                {
                    int t = digits[i] * 100 + digits[j] * 10 + digits[k];
                    if((t&1) == 0 && (t >= 100))
                    {
                        temp.insert(t);
                    }
                    t = digits[i] * 100 + digits[k] * 10 + digits[j];
                    if((t&1) == 0 && (t >= 100))
                    {
                        temp.insert(t);
                    }

                    t = digits[j] * 100 + digits[i] * 10 + digits[k];
                    if((t&1) == 0 && (t >= 100))
                    {
                        temp.insert(t);
                    }
                    t = digits[j] * 100 + digits[k] * 10 + digits[i];
                    if((t&1) == 0 && (t >= 100))
                    {
                        temp.insert(t);
                    }                    

                    t = digits[k] * 100 + digits[j] * 10 + digits[i];
                    if((t&1) == 0 && (t >= 100))
                    {
                        temp.insert(t);
                    }
                    t = digits[k] * 100 + digits[i] * 10 + digits[j];
                    if((t&1) == 0 && (t >= 100))
                    {
                        temp.insert(t);
                    }
                }
            }
        }

        vector<int> res(temp.begin(), temp.end());
        sort(res.begin(), res.end());
        return res;
    }
};