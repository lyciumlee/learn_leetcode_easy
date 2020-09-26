#include <string>


using namespace std;



class Solution {
public:
    bool detectCapitalUse(string word)
    {
        int cnt = 0, wordLenth = word.size();
        for(int i = 0; i < wordLenth;i++)
        {
            if(word[i] <= 'Z') cnt++;

        }
        return cnt == 0 || cnt == wordLenth || (cnt == 1 && word[0] <= 'Z');
    }
};