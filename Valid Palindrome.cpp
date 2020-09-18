#include <string>
#include <algorithm>


using namespace std;

class Solution {
public:
    bool isPalindrome(string s)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        auto left = s.begin();
        auto right = prev(s.end());
        while(left < right)
        {
            if(!::isalnum(*left)) left++;
            else if(!::isalnum(*right)) right--;
            else if(*left != *right) return false;
            else {
                left++;
                right--;
            }

        }
        return true;
    }
};