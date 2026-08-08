/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) {
if(!root)
{
    return 0;
}
if(!root->left && !root->right)
{
    return 1;
}
int left=maxDepth(root->left);
int right=maxDepth(root->right);
if(left>right)
{
    return 1+left;
}
else
{
    return 1+right;
}
}