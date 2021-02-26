/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */

// @lc code=start
class Solution
{
public:
    int lengthOfLastWord(string s)
    {

        if (s.length() < 1)
            return 0;

        int l = s.length() - 1, r = s.length() - 1;

        while (l >= 0)
        {
            if (s[l] == ' ' && r != l)
            {
                return r - l;
            }
            if (s[l] == ' ' && r == l)
            {
                r--;
            }
            l--;
        }
        return r - l;
    }
};
// @lc code=end
