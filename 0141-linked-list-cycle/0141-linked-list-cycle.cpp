/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* temp = head;
        ListNode* temp1 = head;
        while(temp1 != nullptr && temp1->next != nullptr){
            temp1 = temp1->next->next;
            temp = temp->next;
            if(temp1 == temp){
                return true;
            }
        }
        return false;
        
    }
};