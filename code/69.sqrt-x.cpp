/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
class Solution
{
public:
    int mySqrt(int x)
    {

        if (x <= 1)
            return x;
        int left = 0, right = x;
        int mid = 0;
        while (left < right)
        {
            mid = left + (right - left) / 2;

            if (x / mid >= mid)
                left = mid + 1;
            else
                right = mid;
        }

        return right - 1;
    }
};
// @lc code=end
