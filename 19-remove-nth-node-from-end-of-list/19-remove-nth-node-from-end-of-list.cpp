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
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        ListNode* slow = head;
        for(int i = 0 ; i < n ; i++)
        {
            if(slow==NULL)
                return NULL;
            slow = slow->next;
        }
        if(slow == NULL)
            return head->next;
        ListNode* fast = head;
        while(slow->next != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
        fast->next = fast->next->next;
        return head;
    }
};