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
    ListNode* rotateRight(ListNode* head, int k)
    {
        ListNode* temp = head ;
        ListNode* newone = head;
        if(temp==NULL)
        {
            return NULL;
        }
        int len = 1 ;
        while(temp->next)
        {
            temp = temp->next;
            len++;
        }
        temp->next = head;
        if( k %= len)
        {
            for(auto i = 0 ; i < len-k ; i++)
            {
                temp = temp->next;
            }
        }
        newone = temp->next;
        temp->next= NULL;
        return newone;
    }
};