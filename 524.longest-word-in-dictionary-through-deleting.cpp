/*
 * @lc app=leetcode id=524 lang=cpp
 *
 * [524] Longest Word in Dictionary through Deleting
 */

// @lc code=start
class Solution
{
public:
    string findLongestWord(string s, vector<string> &d)
    {
        string ans = "";

        for (string tar : d)
        {
            int len = ans.length();
            if (tar.length() < len || (len == tar.length() && ans < tar))
                continue;

            if (isSub(s, tar))
                ans = tar;
        }

        return ans;
    }

    bool isSub(string s, string target)
    {

        int i = 0;
        for (char c : s)
        {
            if (i < target.length() && c == target[i])
                i++;
        }

        return (i == target.length());
    }
};
// @lc code=end
