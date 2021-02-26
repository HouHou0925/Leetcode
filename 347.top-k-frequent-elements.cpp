/*
 * @lc app=leetcode id=347 lang=cpp
 *
 * [347] Top K Frequent Elements
 */

// @lc code=start

// #include <vector>
// #include <map>
// #include <unordered_map>
// #include <iostream>

// using namespace std;

class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> m;
        priority_queue<pair<int, int>> q;
        vector<int> res;
        for (auto a : nums)
            m[a]++;
        for (auto it : m)
            q.push({it.second, it.first});
        for (int i = 0; i < k; ++i)
        {
            res.push_back(q.top().second);
            q.pop();
        }
        return res;
    }
};

// int main()
// {
//     Solution A;
//     std::vector<int> a = {1, 1, 1, 2, 2, 3};
//     A.topKFrequent(a, 2);
//     system("PAUSE");
// }

// @lc code=end
