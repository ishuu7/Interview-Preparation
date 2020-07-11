//  https://leetcode.com/problems/merge-two-sorted-lists/



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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* curr1 = l1;
        ListNode* curr2 = l2;
        ListNode* ans = new ListNode();
        ListNode* head = ans;
        while(curr1 && curr2) {
            if(curr1 -> val > curr2 -> val) {
                ans -> next = curr2;
                ans = ans -> next;
                curr2 = curr2 -> next;
            }
            else {
                ans -> next = curr1;
                ans = ans -> next;
                curr1 = curr1 -> next;
            }
        }
        while(curr1) {
            ans -> next = curr1;
            ans = ans -> next;
            curr1 = curr1 -> next;
        }
        while(curr2) {
            ans -> next = curr2;
            ans = ans -> next;
            curr2 = curr2 -> next;
        }
        return head -> next;
    }
};
