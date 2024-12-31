class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* tmp = head;
        int listSize = count(head);
        int mid = listSize / 2;
        if (listSize == 1) {  // If only one node exist in the linkedlist
            head = NULL;
            return head;
        }
        for (int i = 0; i < mid - 1; i++) {
            tmp = tmp->next;
        }
        ListNode* deleteNode = tmp->next;
        tmp->next = tmp->next->next;
        delete deleteNode;
        return head;
    }
    int count(ListNode* head) { // count the length of the linkedlist
        ListNode* tmp = head;
        int c = 0;
        while (tmp != NULL) {
            c++;
            tmp = tmp->next;
        }
        return c;
    }
};
