/**
 * Definition for singly-linked list.
 * struct ListNode {
https://assets.leetcode.com/uploads/2020/10/03/remove_ex1.jpg$0 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode *curr=head;
    int count=0;

    while(curr!=NULL)
    {
        curr=curr->next;
        count++;
    }
    if(count==n)
    {
        return head->next;
    }
    if(head->next==NULL)
    {
        return 0;
    }
    curr=head;
    for(int i=0;i<count-n-1;i++)
    {
        curr=curr->next;
    }
    curr->next=curr->next->next;
    return head;

}