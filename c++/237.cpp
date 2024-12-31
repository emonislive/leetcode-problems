class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode * deleteTheNode = node->next;
        node->val = node->next->val;   // Copying the value of the next node to the current node
        node->next = node->next->next; // Ignoring the immediate next node and connecting the current node with the one after it.
        delete deleteTheNode;          // Deleting the immediate next node
    }
};
