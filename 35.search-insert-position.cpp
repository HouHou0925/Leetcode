/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        
        int l = 0, r = nums.size();
        while (l < r)
        {
            int m = (l + r) / 2;
            if (nums[m] < target)
                l = m + 1;

            else
            {
                r = m;
            }
        }

        return l;
    }
};
// @lc code=end
