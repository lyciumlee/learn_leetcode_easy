#include <bits/stdc++.h>


using namespace std;

class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed)
    {
        int duration_time = releaseTimes[0];
        char key = keysPressed[0];
        for(int i = 1; i <= keysPressed.size(); i++)
        {
            if(i == keysPressed.size())
            {
                break;
            }
            int this_key_duration = releaseTimes[i] - releaseTimes[i - 1];
            if(this_key_duration > duration_time)
            {
                duration_time = this_key_duration;
                key = keysPressed[i];
                continue;
            }
            else if(this_key_duration == duration_time)
            {
                if(keysPressed[i] > key)
                {
                    key = keysPressed[i];
                }
                continue;
            }
        }
        return key;
    }
};

