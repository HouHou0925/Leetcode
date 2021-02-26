/*
 * @lc app=leetcode id=38 lang=cpp
 *
 * [38] Count and Say
 */

// @lc code=start
class Solution
{
public:
    string run(string s, int n)
    {
        string tmp = "";

        if (n == 1)
            return s;
        else
        {
            int time = 1;
            for (int i = 0; i < s.length(); i++)
            {

                if (s[i] == s[i + 1])
                    time++;
                else
                {

                    tmp += std::to_string(time) + s[i];
                    time = 1;
                }
            }
            return run(tmp, n - 1);
        }
    }

    string countAndSay(int n)
    {

        return run("1", n);
    }
};
// @lc code=end
