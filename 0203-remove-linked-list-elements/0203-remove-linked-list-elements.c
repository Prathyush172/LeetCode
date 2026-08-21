/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode* curr=head;
    while(curr!=NULL && curr->val==val)
    {
        head=curr->next;
        curr=head;
    }
    while(curr!=NULL && curr->next!=NULL)
    {
        if(curr->next->val==val)
        {
            curr->next=curr->next->next;
        }
        else
        {
            curr=curr->next;
        }
    }
    return head;
}