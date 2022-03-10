#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
    int countBalls(int lowLimit, int highLimit)
    {
        unordered_map<int, int> records;
        int max = 0;

        for(int i = lowLimit; i <= highLimit; i++)
        {
            int sum = 0;
            int temp = i;
            while(temp > 0)
            {
                sum += (temp % 10);
                temp /= 10;
            }
            records[sum] += 1;
            if(records[sum] > max)
            {
                max = records[sum];
            }
        }
        return max;
    }
};