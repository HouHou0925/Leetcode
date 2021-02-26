/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int tmp = 0;
        if (!nums.empty())
            tmp++;
        for (int i = nums.size() - 1; i > 0; i--)
        {

            if (nums[i] == nums[i - 1])
            {
                nums.erase(nums.begin() + i);
            }
               }

        return nums.size();
    }
};
// @lc code=end
