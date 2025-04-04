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
    ListNode* middleNode(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
            return head;
        }
        // middle of the ll
        ListNode* temp = head;
        ListNode* temp1 = head;
        while(temp1 != nullptr && temp1->next != nullptr){
            temp = temp->next;
            temp1 = temp1->next->next;
        }
        return temp;
    }
};