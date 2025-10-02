class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *slow = head;
        ListNode *fast = head;

        while (fast && fast->next) {
            fast = fast->next ? fast->next->next : nullptr;
            slow = slow->next;
        }
        return slow;
    }
};
