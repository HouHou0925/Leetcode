/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */

// @lc code=start

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int carry = 1;

        vector<int> ans(digits.size(), 0);

        for (int i = digits.size() - 1; i >= 0; i--)
        {
            carry += digits[i];
            ans[i] = carry % 10;
            carry /= 10;
        }

        if (carry)
            ans.insert(ans.begin(), 1);
        return ans;
    }
};

// @lc code=end
