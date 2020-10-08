#include <string>


using namespace std;



class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord)
    {
        const int n = sentence.size();
        const int l = searchWord.size();
        int word = 0;
        for(int i = 0; i <= n - l; i++)
        {
            if(i == 0 || sentence[i - 1] == ' ')
            {
                word++;
                bool valid = true;
                for(int j = 0; j < l && valid; j++)
                {
                    valid = valid && (sentence[i + j] == searchWord[j]);
                }
                if(valid) return word;
            }
        }
        return -1;
    }
};