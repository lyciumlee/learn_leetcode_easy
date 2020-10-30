class Solution {
public:
    int numTrees(int n)
    {
        long res = 1;
        for(int i = n + 1; i <= (n << 1); i++)
        {
            res = res * i / (i - n);
        }   
        return res;
    }
};