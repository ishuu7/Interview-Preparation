// https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/


/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        flat(head);
        return head;
    }
private:
    Node* flat(Node* curr) {
        Node* previous = NULL;
        while(curr) {
            if(curr -> child) {
                Node* temp = curr -> next; // jisme jodna hai.
                curr -> next = curr -> child;
                curr -> next -> prev = curr;
                Node* last = flat(curr -> child); // returns the last node, when transversing through child.
                last -> next = temp;
                if(temp) {
                    temp -> prev = last;
                }
                curr -> child = NULL;
                curr = last;
            }
            previous = curr;
            curr = curr -> next;
        }
        return previous;
    }
};
