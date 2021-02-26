/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start

#include <vector>

class Solution
{
public:
    map<char, char> values = {{')', '('}, {'}', '{'}, {']', '['}};
    map<char, char>::iterator it;
    vector<char> sta;

    bool isValid(string s)
    {

        if (s.length() % 2 == 1)
            return false;

        for (int i = s.length() - 1; i >= 0; i--)
        {

            it = values.find(s[i]);
            if (it != values.end())
            {
                sta.insert(sta.begin(), s[i]);
            }
            else
            {

                if (sta.empty() || s[i] != values[sta[0]])
                    return false;
                else
                    sta.erase(sta.begin());
            }
        }

        return true;
    }
    // bool isValid(string s)
    // {

    //     if (s.length() % 2 == 1)
    //         return false;

    //     for (int i = s.length() / 2 - 1; i >= 0; i--)
    //     {

    //         it = values.find(s[i]);
    //         if (it != values.end())
    //         {
    //             string temp = s.substr(0, i + 1);

    //             if (!isValid(temp))
    //             {
    //                 return false;
    //             }
    //             else
    //             {
    //                 temp = s.substr(s.length() - 1 - i, s.length() - (s.length() - 1 - i));
    //                 return isValid(temp);
    //             }
    //         }

    //         if (s[i] != values[s[(s.length() - 1 - i)]])
    //             return false;
    //     }

    //     return true;
    // }
};
// @lc code=end
