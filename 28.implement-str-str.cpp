/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Implement strStr()
 */

// @lc code=start
class Solution
{
public:
    int strStr(string haystack, string needle)
    {

        if (needle == "")
            return 0;
        if (needle.length() > haystack.length())
            return -1;

        int time = 0;

        for (int i = 0; i < haystack.length(); i++)
        {

            if (haystack[i] == needle[time])
            {
                time++;
            }

            else
            {

                i = i - time;
                time = 0;
            }

            if (time == needle.length())
                return (i == 0 ? i : i - time + 1);
        }

        return -1;
    }
};
// @lc code=end
