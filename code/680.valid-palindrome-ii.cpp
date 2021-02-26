/*
 * @lc app=leetcode id=680 lang=cpp
 *
 * [680] Valid Palindrome II
 */

// @lc code=start
class Solution
{
public:
    bool validPalindrome(string s)
    {
        int l = 0, r = s.length() - 1;

        while (l < r)
        {

            if (s[l] != s[r])
            {
                return (isPai(l + 1, r, s) || isPai(l, r - 1, s));
            }
            l++;
            r--;
        }
        return true;
    }

    bool isPai(int l, int r, string s)
    {

        while (l < r)
        {
            if (s[l++] != s[r--])
            {
                return false;
            }
        }
        return true;
    }
};
// @lc code=end
