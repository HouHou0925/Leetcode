/*
 * @lc app=leetcode id=83 lang=cpp
 *
 * [83] Remove Duplicates from Sorted List
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

        ListNode *cur = head;
        ListNode *tmp;

        while (cur && cur->next)
        {
            if (cur->val == cur->next->val)
            {
                tmp = cur->next;
                cur->next = cur->next->next;
                delete (tmp);
            }
            else
                cur = cur->next;
        }
        return head;

        // 遞迴
        // if (!head || !head->next)
        //     return head;

        // head->next = deleteDuplicates(head->next);

        // return (head->val == head->next->val) ? head->next : head;
    }
};
// @lc code=end
