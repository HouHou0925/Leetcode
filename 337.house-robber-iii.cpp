/*
 * @lc app=leetcode id=337 lang=cpp
 *
 * [337] House Robber III
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    int find(TreeNode *root, map<TreeNode *, int> &table)
    {

        map<TreeNode *, int>::iterator iter;
        int num = 0;
        if (!root)
            return 0;
        else
        {
            iter = table.find(root);
            if (iter != table.end())
                return iter->second;

            if (root->left)
            {
                num = num + find(root->left->left, table) + find(root->left->right, table);
            }

            if (root->right)
            {
                num = num + find(root->right->left, table) + find(root->right->right, table);
            }

            num = max((find(root->left, table) + find(root->right, table)), root->val + num);

            table[root] = num;
            return num;
        }
    }

    int rob(TreeNode *root)
    {

        map<TreeNode *, int> table;

        return find(root, table);
    }
};
// @lc code=end
