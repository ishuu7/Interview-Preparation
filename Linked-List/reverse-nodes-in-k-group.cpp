// https://leetcode.com/problems/reverse-nodes-in-k-group/

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
    int getCount(ListNode* curr) {
        int cc = 0;
        while(curr) {
            curr = curr -> next;
            cc++;
        }
        return cc;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(getCount(head) < k || (!head))
            return head;
        ListNode* curr = head, *pre = NULL, *nxt = NULL;
        for(int i = 0; i < k; i++) {
            nxt = curr -> next;
            curr -> next = pre;
            pre = curr;
            curr = nxt;
        }
        head -> next = reverseKGroup(curr, k);
        return pre;
    }
};
