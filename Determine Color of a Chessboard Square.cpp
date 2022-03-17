#include <bits/stdc++.h>


using namespace std;




class Solution {
public:
    bool squareIsWhite(string coordinates)
    {
        // Return true if the square is white, and false if the square is black.
        int x_num = coordinates[0] - 'a';
        int y_num = coordinates[1] - '1';
        // if(x_num & 1)
        // {
        //     // white start
        //     if(y_num & 1)
        //     {
        //         return false;
        //     }else{
        //         return true;
        //     }
        // }else{
        //     // black start
        //     if(y_num & 1)
        //     {
        //         return true;
        //     }else{
        //         return false;
        //     }
        // }
        // if(((x_num & 1 == 1) && (y_num & 1 == 1)) || ((x_num & 1 != 1) && ()))
        int t1 = x_num & 1;
        int t2 = y_num & 1;
        // if((t1 == 1 && t2 == 1) || ((t1 != 1 && t2 != 1)))
        // {
        //     return false;
        // }else{
        //     return true;
        // }
        if(t1 ^ t2)
        {
            return true;
        }else{
            return false;
        }
    }
};

