// https://leetcode.com/problems/reverse-linked-list/

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

// more readable..
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head)
            return head;
        ListNode* curr = head;
        int cc = 0;
        while(curr){
            curr = curr -> next;
            cc++;
        }
        curr = head;
        ListNode* nxt = NULL, *pre = NULL;
        for(int i = 0; i < cc; i++) {
            nxt = curr -> next;
            curr -> next = pre;
            pre = curr;
            curr = nxt;
        }
        return pre;
    }
};

// another one..
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head)
            return head;
        ListNode* curr = head;
        ListNode* temp = curr -> next;
        if(!temp)
            return head;
        curr -> next = NULL;
        while(temp -> next) {
            ListNode* curr2 = temp;
            temp = temp -> next;
            curr2 -> next = curr;
            curr = curr2;
        }
        temp -> next = curr;
        return temp;
    }
};


