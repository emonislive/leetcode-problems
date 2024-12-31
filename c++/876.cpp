class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int listSize = count(head);
        int mid = listSize / 2;
        
        ListNode* tmp = head;
        
        for (int i = 0; i < mid; i++) {
            tmp = tmp->next;
        }
        return tmp;
    }
    int count(ListNode* head) {
        int size = 0;
        ListNode* tmp = head;
        while (tmp != NULL) {
            size++;
            tmp = tmp->next;
        }
        return size;
    }
};
