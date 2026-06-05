/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* temp2 = head;
        while(head!=NULL){
            Node* temp = new Node(head->val);
            temp->next = head->next;
            head->next = temp;
            head = head->next->next;
        }
        head = temp2;
        while(head!=NULL){
            Node* temp3 = head->next;
            if(head->random == NULL){
                temp3->random = NULL;
                head = temp3->next;
            }
            else{
                temp3->random = head->random->next;
                head = temp3->next;
            }
        }
        head = temp2;
        Node* dummy  = new Node(0);
        Node* temp4 = dummy;
        while(head!=NULL){
            dummy->next = head->next;
            dummy = dummy->next;
            head->next = dummy->next;
            head = head->next;
        }
        dummy->next=NULL;
        Node* res = temp4->next;
        delete temp4;
        return res;
    }
};
