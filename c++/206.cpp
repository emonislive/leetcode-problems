class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* nextPtr;

        while (curr != NULL) {
            nextPtr = curr->next; // Store the next node
            curr->next = prev;    // Reverse the link
            prev = curr;    // Move the previous pointer to the current node
            curr = nextPtr; // Move the current pointer to the next node
        }
        return prev;
    }
};
