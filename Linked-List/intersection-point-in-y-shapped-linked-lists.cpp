// https://practice.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1

int intersectPoint(Node* head1, Node* head2) {
    Node* l1 = head1;
    Node* l2 = head2;
    int cc = 0, cc2 = 0;
    while(l1) {
        l1 = l1 -> next;
        cc++;
    }
    while(l2) {
        l2 = l2 -> next;
        cc2++;
    }
    l1 = head1;
    l2 = head2;
    int diff = abs(cc - cc2);
    if(cc > cc2) {
        int count = 0;
        while(count != diff) {
            l1 = l1 -> next;
            count++;
        }
    }
    else {
        int count = 0;
        while(count != diff) {
            l2 = l2 -> next;
            count++;
        }
    }
    while(l1 != l2 && (l1 && l2 )) {
        l1 = l1 -> next;
        l2 = l2 -> next;
    }
    if(l1 == l2) {
        return l1 -> data;
    }
    return -1;
}

