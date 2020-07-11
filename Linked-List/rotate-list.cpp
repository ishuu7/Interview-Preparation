// https://leetcode.com/problems/rotate-list/

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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head)
            return NULL;
        int len = 1;
        ListNode* curr = head;
        while(curr -> next) {
            curr = curr -> next;
            len++;
        }
        curr -> next = head;
        for(int i =0; i < len - (k % len); i++) {
            curr = curr -> next;
        }
        ListNode* temp = curr -> next;
        curr -> next = NULL;
        return temp;
    }
};
