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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int totalNodes=1;
        ListNode* temp = head;
        if(head==NULL) return NULL;
        while(temp->next!=NULL){
            temp=temp->next;
            totalNodes++;
        }
        if(totalNodes==1) return NULL;
        int j = totalNodes - n;
        if(j==0){
            head = head->next;
            return head;
        }

        temp=head;
        for(int i=1;i<j;i++){
            temp=temp->next;
        }
        ListNode* delNode = temp->next;
        temp->next = delNode->next;
        delete delNode;
        return head;
    }
};
