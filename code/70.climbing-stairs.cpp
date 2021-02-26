/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */

// @lc code=start
class Solution
{
public:
    int climbStairs(int n)
    {
        //迴圈+空間優化

        long a = 1, b = 2;
        for (int i = 1; i < n; i++)
        {
            b += a;
            a = b - a;
                }
        // while (n--)
        // {
        //     b += a;
        //     a = b - a;
        // }
        return a;

        //迴圈
        // if (n <= 1)
        //     return 1;
        // vector<int> dp(n);
        // dp[0] = 1;
        // dp[1] = 2;
        // for (int i = 2; i < n; i++)
        // {
        //     dp[i] = dp[i - 1] + dp[i - 2];
        // }
        // return dp.back();

        //遞迴
        // if (n == 1)
        //     return 1;
        // else if (n == 2)
        //     return 2;

        // else
        //     return climbStairs(n - 1) + climbStairs(n - 2);
    }
};
// @lc code=end
