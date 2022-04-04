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
    ListNode* swapNodes(ListNode* head, int k)
    {
        ListNode* start = NULL;
        ListNode* end = NULL;
        ListNode* temp = head;
        if(head==NULL)
        {
            return NULL;
        }
        for(int i = 1 ; i < k ; i++)
        {
            temp = temp->next;
        }
        start = temp ;
        temp = head;
        int count = 0 ;
        while(temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        //cout << start->val ;
        temp = head;
        int y = count-k;
        while( y-- && temp->next != NULL)
        {
            temp = temp->next;
        }
        end = temp ;
        swap(start->val,end->val);
        return head;
    }
};