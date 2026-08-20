/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    if (head == NULL || head->next == NULL)
        return head;

    // Find length
    int n = 0;
    struct ListNode *temp = head;

    while (temp != NULL) {
        n++;
        temp = temp->next;
    }

    // Create array
    int *arr = malloc(n * sizeof(int));

    temp = head;

    for (int i = 0; i < n; i++) {
        arr[i] = temp->val;
        temp = temp->next;
    }

    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - 1 - i])
            return false;
    }

    return true;
}