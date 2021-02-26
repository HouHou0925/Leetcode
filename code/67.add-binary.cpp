/*
 * @lc app=leetcode id=67 lang=cpp
 *
 * [67] Add Binary
 */

// @lc code=start
class Solution
{
public:
    string addBinary(string a, string b)
    {
        string ans = "";
        int carry = 0;
        int l = a.length() - 1;
        int r = b.length() - 1;

        while (l >= 0 and r >= 0)
        {
            carry += (a[l] - '0' + b[r] - '0');
            ans.insert(0, 1, (carry % 2) + '0');
            carry /= 2;
            l--;
            r--;
        }

        if (l < 0)
        {
            while (r >= 0)
            {
                carry += b[r] - '0';
                ans.insert(0, 1, (carry % 2) + '0');
                // ans = (carry % 2) + '0' + ans;
                carry /= 2;
                r--;
            }
        }
        if (r < 0)
        {
            while (l >= 0)
            {
                carry += a[l] - '0';
                ans.insert(0, 1, (carry % 2) + '0');
                carry /= 2;
                l--;
            }
        }

        if (carry)
            ans.insert(0, 1, '1');

        return ans;
    }
};
// @lc code=end
