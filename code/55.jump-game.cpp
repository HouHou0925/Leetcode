/*
 * @lc app=leetcode id=55 lang=cpp
 *
 * [55] Jump Game
 */

// @lc code=start
class Solution
{
public:
    bool canJump(vector<int> &nums)
    {

        if (nums.size() == 1)
            return true;

        int end = nums.size() - 1;
        bool find = false;

        for (int i = end - 1; i >= 0; i--)
        {
            if (nums[i] >= end - i)
            {
                end = i;
                find = true;
            }
            else
            {
                find = false;
            }
        }

        return find;
    }
};
// @lc code=end
