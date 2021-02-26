/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start

#include <map>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> table;
        vector<int> ans;
        int i = 0;
        for (vector<int>::iterator begin = nums.begin(); begin != nums.end(); begin++, i++)
        {

            if (table.find(*begin) != table.end())
            {

                ans.push_back(table[*begin]);
                ans.push_back(i);
                return ans;
            }
            else
            {
                table[target - *begin] = i;
            }
        }

        return ans;
    }
};
// vector<int> twoSum(vector<int> &nums, int target)
// {

//     map<int, int> map_table;
//     vector<int> ans;

//     int i = 0;
//     int dif = 0;
//     for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++, i++)
//     {

//         dif = target - *it;
//         if (map_table.find(*it) != map_table.end())
//         {
//             ans.push_back(map_table[*it]);
//             ans.push_back(i);

//             return ans;
//         }
//         else
//         {
//             map_table[dif] = i;
//         }
//     }
//     return ans;
// }

// class Solution
// {
// public:
//     vector<int> twoSum(vector<int> &nums, int target)
//     {
//         map<int, int> map_table;
//         vector<int> ans;
//         int dif;
//         int t = 0;
//         for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++)
//         {

//             dif = target - *it;
//             if (map_table.find(*it) != map_table.end())
//             {

//                 ans.push_back(map_table.find(*it)->second);
//                 ans.push_back(t);
//                 return ans;
//             }
//             else
//             {
//                 //map_table.insert(make_pair(dif, t));
//                 map_table[dif] = t;
//             }

//             t++;
//         }
//         return ans;
//     }

// @lc code=end
