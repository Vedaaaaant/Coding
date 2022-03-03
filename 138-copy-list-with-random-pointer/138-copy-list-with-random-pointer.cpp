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
    Node* copyRandomList(Node* head)
    {
        if(head==NULL)
            return NULL;
        Node* curr = head;
        while(curr)
        {
            Node* temp = curr->next;
            curr->next = new Node(curr->val);
            curr->next->next=temp;
            curr=temp;
        }
        curr=head;
        while(curr)
        {
            curr->next->random = curr->random ? curr->random->next : curr->random;
            curr = curr->next->next;
        }
        Node* orignal = head;
        Node* copy = head->next;
        Node* temp = copy;
        while(orignal && copy)
        {
            orignal->next = copy->next;
            copy->next = copy->next?copy->next->next:copy->next;
            orignal = orignal->next;
            copy = copy->next;
        }
        return temp;
    }
};