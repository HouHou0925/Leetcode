/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {

        for (int i = 0, j = nums.size() - 1; i <= j; i++, j--)
        {

            if (nums[i] == val)
            {
                nums.erase(nums.begin() + i);

                j--;
                i--;
            }

            if (j >= 0 && nums[j] == val)
            {
                nums.erase(nums.begin() + j);
            }
        }

        return nums.size();
    }
};
// @lc code=end
