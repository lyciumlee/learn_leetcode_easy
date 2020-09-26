#include <string>
#include <vector>
#include <unordered_set>


using namespace std;



class Solution {
public:
    vector<string> findWords(vector<string>& words)
    {
        vector<string> res;
        unordered_set<char> row1{'q','w','e','r','t','y','u','i','o','p'};
        unordered_set<char> row2{'a','s','d','f','g','h','j','k','l'};
        unordered_set<char> row3{'z','x','c','v','b','n','m'};
        for(string word : words)
        {
            int row_one_u=0, row_two_u=0, row_three_u=0;
            for(char c:word)
            {
                if(c < 'a') c+= 32;
                if(row1.count(c)) row_one_u = 1;
                if(row2.count(c)) row_two_u = 1;
                if(row3.count(c)) row_three_u = 1;
                if(row_one_u + row_two_u + row_three_u > 1) break;
            }
            if(row_one_u + row_two_u + row_three_u == 1)
            {
                res.push_back(word);
            }
        }
        return res;
    }
};