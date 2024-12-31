class Solution {
public:
    bool hasCycle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        bool flag = false;
        while (fast != NULL && fast->next != NULL) { // fast->next != NULL  is for even number of size & fast != NULL for odd number of size
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                flag = true;
                break;
            }
        }
        return flag;
    }
};
