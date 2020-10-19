#include <string>
#include <unordered_set>


using namespace std;



class Solution {
public:
    bool isPathCrossing(string path)
    {
        unordered_set<int> s;
        int x = 0;
        int y = 0;
        s.insert(x * 10000 + y);
        for(char d: path)
        {
            if(d == 'N') ++y;
            else if(d == 'S') --y;
            else if(d == 'E') ++x;
            else if(d == 'W') --x;
            if(!s.insert(x * 10000 + y).second)
            {
                return true;
            }
        }
        return false;
    }
};