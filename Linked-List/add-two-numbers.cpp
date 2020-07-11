// https://leetcode.com/problems/add-two-numbers/


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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* curr1 = l1;
        ListNode* curr2 = l2;
        int carry = 0;
        ListNode* ans = new ListNode();
        ListNode* te = ans;
        while(curr1 && curr2) {
            int sum = curr1 -> val + curr2 -> val + carry;
            ListNode* temp = new ListNode(sum % 10);
            ans -> next = temp;
            ans = ans -> next;
            carry = sum / 10;
            curr1 = curr1 -> next;
            curr2 = curr2 ->  next;
        }
        while(curr1) {
            int sum = curr1 -> val + carry;
            ListNode* temp = new ListNode(sum % 10);
            ans -> next = temp;
            ans = ans -> next;
            carry = sum / 10;
            curr1 = curr1 -> next;
        }
        while(curr2) {
            int sum = curr2 -> val + carry;
            ListNode* temp = new ListNode(sum % 10);
            ans -> next = temp;
            ans = ans -> next;
            carry = sum / 10;
            curr2 = curr2 -> next;
        }
        if(carry != 0) {
            ListNode* temp = new ListNode(carry);
            ans -> next = temp;
            ans = ans -> next;
        }
        return te -> next;
    }
};
