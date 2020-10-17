#include <string>
#include <sstream>



using namespace std;



class Solution {
public:
    string toGoatLatin(string S)
    {
        const string vowls = "aeiouAEIOU";
        string res;
        string word;
        int index = 0;
        istringstream ss(S);
        while(ss >> word)
        {
            if(vowls.find(word[0]) == string::npos)
            {
                word = word.substr(1) + word[0];
            }
            res += " " + word + "ma" + string(++index, 'a');
        }
        return res.substr(1);
    }
};