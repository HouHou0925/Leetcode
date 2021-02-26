/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
class Solution
{
public:
    int reverse(int x)
    {
        long ans = 0, tmp = x;
        bool neg = false;
        // if (x < 0)
        // {
        //     neg = true;

        //     tmp *= -1;
        // }

        while (tmp)
        {

            ans = ans * 10 + (tmp % 10);
            if (ans > INT_MAX || ans < INT_MIN)
                return 0;
            tmp /= 10;
        }
        //ans = ans * 10 + (x % 10);

        // if (neg)
        //     ans *= -1;
        return ans;
    }
};
// @lc code=end
