/*
 * @lc app=leetcode id=82 lang=cpp
 *
 * [82] Remove Duplicates from Sorted List II
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (!head || !head->next)
            return head;
        bool have_head = false;

        ListNode *pre;
        ListNode *cur;

        while (!have_head)
        {
            if (head->next && head->val == head->next->val)
            {
                while (head->next && head->val == head->next->val)
                {
                    head = head->next;
                }
            }
            else
                have_head = true;

            if (!have_head)
            {
                if (!head->next)
                    return NULL;
                else
                    head = head->next;
            }
        }

        pre = head;
        cur = head;

        // return cur;
        while (pre->next)
        {
            cur = pre->next;
            while (cur->next && cur->next->val == cur->val)
            {
                cur = cur->next;
            }
            if (cur != pre->next)
                pre->next = cur->next;
            else
                pre = pre->next;
        }

        return head;
    }
};
// @lc code=end
