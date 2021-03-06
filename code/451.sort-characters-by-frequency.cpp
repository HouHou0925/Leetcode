/*
 * @lc app=leetcode id=451 lang=cpp
 *
 * [451] Sort Characters By Frequency
 */

// @lc code=start
class Solution
{
public:
    string frequencySort(string s)
    {
        string res;
        vector<string> v(s.size() + 1);
        unordered_map<char, int> m;
        for (char c : s)
            ++m[c];
        for (auto a : m)
        {
            v[a.second].append(a.second, a.first);
                }
        for (int i = s.size(); i > 0; --i)
        {
            if (!v[i].empty())
                res.append(v[i]);
        }
        return res;
    }
};
// @lc code=end
