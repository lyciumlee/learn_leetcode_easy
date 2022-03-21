#include <bits/stdc++.h>



using namespace std;


class Solution {
public:
    bool isThree(int n)
    {
        if(n <= 2) return false;
        if(n == 3) return true;
        int for_loop_number = n / 2;
        int count = 0;
        for(int i = 1; i <= for_loop_number; i++)
        {
            if(n % i == 0)
            {
                count++;
            }
            if(count >= 3) return false;
        }
        if(count == 2) return true;
        return false;
    }
};
