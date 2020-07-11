// https://leetcode.com/problems/palindrome-linked-list/

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
    ListNode* temp;
    bool isPalindrome(ListNode* head) {
        temp = head;
        return isPal(head);
    }
private:
    bool isPal(ListNode* curr) {
        if(!curr)
            return true;
        bool ans = isPal(curr -> next) & (temp -> val == curr -> val);
        temp = temp -> next;
        return ans;
    }
};
