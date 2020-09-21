/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

int guess(int num);

class Solution {
public:
    int guessNumber(int n)
    {
        int left = 0, right = n;
        int guessNum;
        while (left <= right)
        {
            guessNum = left + (right - left) / 2;
            int ret = guess(guessNum);
            if(ret == 0) return guessNum;
            else if(ret == 1)
            {
                left = guessNum + 1;
            }else{
                right = guessNum - 1;
            }
        }
        return guessNum;
    }
};
