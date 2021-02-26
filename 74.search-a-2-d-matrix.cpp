/*
 * @lc app=leetcode id=74 lang=cpp
 *
 * [74] Search a 2D Matrix
 */

// @lc code=start
class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {

        int left = 0, right = matrix.size();

        while (left < right)
        {
            int mid = (left + right) / 2;

            if (matrix[mid][0] == target)
            {
                return true;
            }

            if (matrix[mid][0] <= target)
            {
                left = mid + 1;
            }
            else
            {
                right = mid;
            }
        }

        int tmp = (left > 0) ? (left - 1) : left;
        left = 0;
        right = matrix[tmp].size();

        while (left < right)
        {
            int mid = (left + right) / 2;
            if (matrix[tmp][mid] == target)
                return true;
            if (matrix[tmp][mid] <= target)
                left = mid + 1;
            else
                right = mid;
        }

        return false;

        //----------------------------------------
        // int x = matrix[0].size();
        // int y = matrix.size();

        // for (int end_y = 0; end_y < y; end_y++)
        // {

        //     if (matrix[end_y][x - 1] >= target)
        //     {

        //         for (int end_x = 0; end_x < x; end_x++)
        //         {

        //             if (matrix[end_y][end_x] == target)
        //                 return true;
        //         }
        //     }
        // }
        // return false;
    }
};
// @lc code=end
