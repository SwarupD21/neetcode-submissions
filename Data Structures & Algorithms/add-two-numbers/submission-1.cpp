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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;

        ListNode* l3 = new ListNode(0);
        ListNode* head = l3;
        int carry=0;
        while(l1!=NULL && l2!=NULL){
            int res = l1->val + l2->val + carry;
            carry=0;
            if(res>=10){
                int rem = res % 10;
                ListNode* newNode = new ListNode(rem);
                head->next = newNode;
                head = newNode;
                carry = res/10;
            }
            else{
                ListNode* newNode = new ListNode(res);
                head->next = newNode;
                head = newNode;
            }
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1!=NULL){
            int res = l1->val + carry;
            carry=0;
            if(res>=10){
                int rem = res % 10;
                ListNode* newNode = new ListNode(rem);
                head->next = newNode;
                head = newNode;
                carry = res/10;
            }
            else{
                ListNode* newNode = new ListNode(res);
                head->next = newNode;
                head = newNode;
            }
            l1 = l1->next;
        }
        while(l2!=NULL){
            int res = l2->val + carry;
            carry=0;
            if(res>=10){
                int rem = res % 10;
                ListNode* newNode = new ListNode(rem);
                head->next = newNode;
                head = newNode;
                carry = res/10;
            }
            else{
                ListNode* newNode = new ListNode(res);
                head->next = newNode;
                head = newNode;
            }
            l2 = l2->next;
        }
        if(carry>0){
            ListNode* newNode = new ListNode(carry);
            head->next = newNode;
            head = newNode;
        }
        head = l3->next;
        delete l3;
        return head;
    }
};
