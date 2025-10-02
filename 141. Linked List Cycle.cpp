class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *slow = head;
        ListNode *fast = head;

        while (fast && fast->next) {
            fast = fast->next ? fast->next->next : nullptr;
            slow = slow->next;

            // checks if cycle exists then,
            // fast will come to slow position eventually
            if (slow == fast) {
                return true;
            }
        }
        return false;
    }
};
