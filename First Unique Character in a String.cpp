#include <string>
#include <unordered_map>





using namespace std;
class Solution {
public:
    int firstUniqChar(string s)
    {
        if(s.empty()) return -1; 
        unordered_map<char, int> myMap;
        for(auto i: s) myMap[i]++;
        int sLenth = s.size();
        for(auto i=0; i< sLenth;i++)
        {
            if(myMap[s[i]] == 1) return i;
        }
        return -1;
    }
};