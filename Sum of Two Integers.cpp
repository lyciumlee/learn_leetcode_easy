class Solution {
public:
    int getSum(int a, int b) {
        while(b)
        {
            int temp = a ^ b;
            b = ((a & b) & 0x7fffffff) << 1;
            a = temp;
        }
        return a;
    }
};