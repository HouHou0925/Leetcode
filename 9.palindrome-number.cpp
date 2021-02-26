/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution
{
public:
    bool isPalindrome(int x)
    {
        //     string str = std::to_string(x);
        //     return str == (new string())->assign(str.rbegin(), str.rend());

        long ans = 0, tmp = x;

        while (tmp > 0)
        {

            ans = ans * 10 + (tmp % 10);
            tmp /= 10;
        }

        return ans == x;
    }
}

;
// @lc code=end
