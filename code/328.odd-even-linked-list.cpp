/*
 * @lc app=leetcode id=328 lang=cpp
 *
 * [328] Odd Even Linked List
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
    ListNode *oddEvenList(ListNode *head)
    {

        ListNode *run = head, *even_head, *even_end;

        if (!head || !head->next)
            return head;

        even_head = head->next;

        even_end = head->next;

        while (even_end && even_end->next)
        {
            run->next = even_end->next;
            run = run->next;
            even_end->next = run->next;
            even_end = even_end->next;
        }

        run->next = even_head;

        return head;
    }
};
// @lc code=end
