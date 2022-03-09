#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int code_size = code.size();
        vector<int> res(code_size);
        if(k == 0)
        {
            return res;
        }else if(k > 0){
            for(int i = 0; i < code_size; i++)
            {
                int sum = 0;
                for(int j = 1; j <= k; j++){
                    sum += code[(i + j) % code_size];
                }
                res[i] = sum;
            }
            return res;
        }
        for(int i = 0; i < code_size; i++){
            int sum = 0;
            for(int j = -1; j >= k; j--)
            {
                sum += code[(i + j + code_size) % code_size];
            }
            res[i] = sum;
        }
        return res;
    }
};

