#include <bits/stdc++.h>



using namespace std;


class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students)
    {
        int res = 0;
        sort(students.begin(), students.end());
        sort(seats.begin(), seats.end());
        for(int i = 0; i < students.size();i++)
        {
            res += abs(students[i] - seats[i]);
        }
        return res;
    }
};