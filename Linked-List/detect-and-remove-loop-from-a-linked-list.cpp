// https://www.interviewbit.com/problems/detect-and-remove-loop-from-a-linked-list/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A) {
    if(A -> next == NULL)
        return A;
    ListNode* p1 = A; // slow
    ListNode* p2 = A; // fast
    while(p1 -> next && p2 -> next -> next) {
        p1 = p1 -> next;
        p2 = p2 -> next -> next;
        if(p1 == p2) {
            break;
        }
    }
    if(p1 != p2) // loop isn't present
        return A; 
    // loop is present.
    p1 = A;
    while(p1 -> next != p2 -> next) {
        p1 = p1 -> next;
        p2 = p2 -> next;
    }
    p2 -> next = NULL;
    return A;
}

