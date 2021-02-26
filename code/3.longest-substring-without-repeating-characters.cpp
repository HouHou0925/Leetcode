/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        map<int, int> dict;
        int res = 0, left = -1;

        
        for (int i = 0; i < s.length(); i++)
        {

            if (dict.count(s[i]) && dict[s[i]] > left)
            {
                left = dict[s[i]];
            }

            dict[s[i]] = i;
            res = max(res, i - left);
        }

        return res;
    }
};
// @lc code=end
