/*
 * @lc app=leetcode id=141 lang=cpp
 *
 * [141] Linked List Cycle
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    bool hasCycle(ListNode *head)
    {

        ListNode *rabbit = head;
        ListNode *turtle = head;

        while (rabbit && rabbit->next)
        {
            rabbit = rabbit->next->next;
            turtle = turtle->next;

            if (rabbit == turtle)
                return true;
        }

        return false;
    }
};
// @lc code=end
