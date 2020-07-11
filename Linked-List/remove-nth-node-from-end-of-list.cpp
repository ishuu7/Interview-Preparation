// https://leetcode.com/problems/remove-nth-node-from-end-of-list
// One pass Solution.


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
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* realhead = new ListNode(0);
        realhead -> next = head;
        ListNode* fast = realhead, *slow = realhead;
        while(fast) {
            fast = fast -> next;
            if(n < 0)
                slow = slow -> next;
            n--;
        }
        ListNode* bad = slow -> next;
        slow -> next = bad -> next;
        delete(bad);
        return  realhead -> next;
    }
};
