#include <vector>
#include <string>


using namespace std;



class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n)
    {
        vector<string> res;
        int i = 1;
        for(int num: target)
        {
            while(i != num)
            {
                res.push_back("Push");
                res.push_back("Pop");
                i++;
            }
            res.push_back("Push");
            i++;
        }
        return res;
    }
};