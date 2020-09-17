



class Solution {
public:
    int mySqrt(int x)
    {
        int left = 1;
        int right = x / 2;
        int last_mid = 0;
        if(x < 2) return x;
        while(left <= right)
        {
            int mid =  left + (right - left) / 2;
            if(x / mid > mid)
            {
                left = mid + 1;
                last_mid = mid;
            }
            else if(x / mid < mid)
            {
                right = mid - 1;
            }else{
                return mid;
            }
        }
        return last_mid;
    }
};