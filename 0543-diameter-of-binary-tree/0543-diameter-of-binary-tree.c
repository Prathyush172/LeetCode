/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int diameter = 0;

int height(struct TreeNode* root)
{
    if (root == NULL)
        return 0;

    int left = height(root->left);
    int right = height(root->right);

    if (left + right > diameter)
        diameter = left + right;

    return (left > right ? left : right) + 1;
}

int diameterOfBinaryTree(struct TreeNode* root)
{
    diameter = 0;
    height(root);
    return diameter;
}