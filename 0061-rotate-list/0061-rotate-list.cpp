/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;
        
        // Count the number of nodes
        int cnt = 1;
        ListNode* temp = head;
        while (temp->next) {
            cnt++;
            temp = temp->next;
        }
        
        // Update k to avoid unnecessary rotations
        k = k % cnt;
        if (k == 0) return head;
        
        // Connect the last node to head to make it circular
        temp->next = head;
        
        // Find the new tail: (cnt - k - 1)th node
        ListNode* temp1 = head;
        for (int i = 0; i < cnt - k - 1; i++) {
            temp1 = temp1->next;
        }
        
        // Break the cycle and set new head
        ListNode* ans = temp1->next;
        temp1->next = nullptr;
        
        return ans;
    }
};