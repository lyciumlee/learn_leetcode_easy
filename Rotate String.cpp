#include <string>



using namespace std;


class Solution {
public:
    bool rotateString(string A, string B)
    {
        if(A.size() != B.size()) return false;
        if(A.size() == 0 && B.size() == 0) return true;
        int Alen = A.size();
        for(int i = 1; i < Alen; i++)
        {
            if(check(A, B, i))
            {
                return true;
            }
        }
        return false;
    }

private:
    bool check(const string& A, const string& B, int offset)
    {
        int Alen = A.size();
        for(int i = 0; i < Alen; i++)
        {
            if(A[(i + offset) % Alen] != B[i]) return false;
        }
        return true;
    }
};