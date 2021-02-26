/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {

        if (strs.empty())
            return "";

        string tmp = strs[0];

        for (int i = 1; i < strs.size(); i++)
        {
            while ((strs[i].find(tmp, 0) > 0 || strs[i].find(tmp, 0) == string::npos) && tmp.length() > 0)
            {

                tmp = tmp.assign(tmp, 0, tmp.length() - 1);
            }

            if (strs[i].find(tmp, 0) != 0)
                return ""; // tmp = "";
        }

        return tmp;
    }
};
// @lc code=end
