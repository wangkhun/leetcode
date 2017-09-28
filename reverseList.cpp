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
    ListNode* reverseList(ListNode* head) {
        if(!head) return head;
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* cur = head;
        
        while(cur->next) {
            ListNode* tmp = cur->next;
            cur->next = tmp->next;
            tmp->next = dummy->next;
            dummy->next = tmp;
        }
        return dummy->next;
        
    }
};
