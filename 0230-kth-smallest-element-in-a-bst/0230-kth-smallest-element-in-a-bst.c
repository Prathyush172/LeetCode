/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

void inorder(struct TreeNode* root, int k, int* count, int* ans) {
    if (root==NULL)
        return;
    inorder(root->left,k,count,ans);
    (*count)++;
    if (*count==k) {
        *ans=root->val;
        return;
    }
    inorder(root->right,k,count,ans);
}
int kthSmallest(struct TreeNode* root,int k) {
    int count=0;
    int ans=0;
    inorder(root,k,&count,&ans);
    return ans;
}
