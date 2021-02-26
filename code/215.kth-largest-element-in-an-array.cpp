/*
 * @lc app=leetcode id=215 lang=cpp
 *
 * [215] Kth Largest Element in an Array
 */

// @lc code=start
class Solution
{
public:
    // int findKthLargest(vector<int> &nums, int k)
    // {
    //     sort(nums.begin(), nums.end());
    //     return nums[nums.size() - k];
    // }

    //-----------------------------
    int findKthLargest(vector<int> &nums, int k)
    {

        int left = 0, right = nums.size() - 1;
        while (1)
        {

            int p = partition(nums, left, right);
            if (p == k - 1) //因為從0開始
            {
                return nums[p];
            }
            if (p > k - 1) //  要的在左邊
            {
                right = p - 1;
            }
            else
            {
                // left++;
                left = p + 1;
            }
        }
    }

    int partition(vector<int> &nums, int left, int right)
    {
        int pivot = nums[left], l = left + 1, r = right;

        while (l <= r)
        {
            if (nums[l] < pivot && nums[r] > pivot)
                swap(nums[l], nums[r]);

            if (nums[l] >= pivot)
                l++;
            if (nums[r] <= pivot)
                r--;
        }

        swap(nums[left], nums[r]);
        return r;
    }
};
// @lc code=end
