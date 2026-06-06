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
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* l1 = head;

        ListNode* curr = slow->next;
        ListNode* prev = NULL;
        ListNode* upcoming = NULL;
        while(curr!=NULL){
            upcoming = curr->next;
            curr->next = prev;
            prev = curr;
            curr = upcoming;
        } 
        slow->next = NULL;
        ListNode* l2 = prev;

        while(l1!=NULL && l1->next!=NULL){
            ListNode* temp = l1->next;
            l1->next = l2;
            l1 = l2;
            l2 = temp;
        }
        l1->next = l2;
        return ;
    }
};
