#include <string>
#include <unordered_map>



using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        unordered_map<char, int> myMap;
        for(char letter : magazine)
        {
            myMap[letter]++;
        }
        for(char letter: ransomNote)
        {
            if(myMap[letter] <= 0) return false;
            else{
                myMap[letter]--;
            }
        }
        return true;
    }
};