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
    ListNode* reverseBetween(ListNode* head, int left, int right) 
    {
        ListNode*temp=head;    
        ListNode*head2=new ListNode();
        head2->next=head;
        ListNode*prev=head2;
        int i=1;
        while(i<left)
        {
            prev=temp;
            temp=temp->next;
            i++;
        }
        ListNode*tail=prev->next;
        
        for(int i=0;i<right-left;i++)
        {
            temp=prev->next;
            prev->next=tail->next;
            tail->next=tail->next->next;
            prev->next->next=temp;
            
        }
        return head2->next;
        
    }
};