/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
class Solution
{
public:
    // int maxSubArray(vector<int> &nums)
    // {
    //     int res = INT_MIN, temp = 0;
    //     for (int i = 0; i < nums.size(); i++)
    //     {
    //         temp = max(temp + nums[i], nums[i]);
    //         res = max(res, temp);
    //     }
    //     return res;
    // }
    // 方法2 divide and conquer
    int get_max(vector<int> &nums, int left, int right)
    {

        if (left >= right)
            return nums[left];

        int mid = left + (right - left) / 2;
        // int mid = (left + right) / 2;

        int lmax = get_max(nums, left, mid - 1);
        int rmax = get_max(nums, mid + 1, right);

        int m_max = nums[mid], t = m_max;
        for (int i = mid - 1; i >= left; i--)
        {
            t += nums[i];
            m_max = max(m_max, t);
        }

        t = m_max;
        for (int i = mid + 1; i <= right; i++)
        {
            t += nums[i];
            m_max = max(m_max, t);
        }

        return max(m_max, max(lmax, rmax));
    }

    int maxSubArray(vector<int> &nums)
    {

        return get_max(nums, 0, nums.size() - 1);
    }
};

// @lc code=end
