class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prev = nullptr;
        ListNode *curr = head;

        while (curr != nullptr) {
            ListNode* temp = curr->next; // stores the next node
            curr->next = prev; // reverse the current node 
            prev = curr; // move previous node to the current node
            curr = temp; // move current node to the next node
        }
        
        head = prev;
        return head; // return the reversed node head
    }
};
