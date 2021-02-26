/*
 * @lc app=leetcode id=29 lang=cpp
 *
 * [29] Divide Two Integers
 */

// @lc code=start
class Solution
{
public:
    int divide(int dividend, int divisor)
    {
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;
        long m = abs(dividend), n = abs(divisor), res = 0;

        int sign = ((dividend < 0) ^ (divisor < 0)) ? 1 : 0;
        if (n == 1)
        {
            return sign ? -m : m;
        }

        while (m >= n)
        {
            long t = n, p = 1;

            while ((t << 1) <= m)
            {
                t = t << 1;
                p = p << 1;
            }

            res += p;
            m -= t;
        }

        return sign ? -res : res;
    }
};
// @lc code=end
