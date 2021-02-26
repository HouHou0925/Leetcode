/*
 * @lc app=leetcode id=633 lang=cpp
 *
 * [633] Sum of Square Numbers
 */

// @lc code=start

#include <math.h>

class Solution
{
public:
    bool judgeSquareSum(int c)
    {

        if (c < 0)
            return false;

        for (int i = 0, j = (int)sqrt(c); i <= j;) 
        {

            int res = c - i * i - j * j;

            if (!res)
                return true;
            if (res < 0)
                j--;
            else
                i++;
        }
        return false;
    }
};
// @lc code=end
